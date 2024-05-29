#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> result;
    
    // Sort the array to use the two-pointer technique
    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i++) {
        // Avoid duplicates for the first number
        if (i > 0 && nums[i] == nums[i - 1]) continue;

        int left = i + 1;
        int right = nums.size() - 1;

        while (left < right) {
            int sum = nums[i] + nums[left] + nums[right];
            if (sum == 0) {
                result.push_back({nums[i], nums[left], nums[right]});

                // Avoid duplicates for the second number
                while (left < right && nums[left] == nums[left + 1]) left++;
                // Avoid duplicates for the third number
                while (left < right && nums[right] == nums[right - 1]) right--;

                left++;
                right--;
            } else if (sum < 0) {
                left++;
            } else {
                right--;
            }
        }
    }

    return result;
}

int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    vector<vector<int>> result = threeSum(nums);

    for (const auto& triplet : result) {
        cout << "[";
        for (int i = 0; i < triplet.size(); i++) {
            cout << triplet[i] << (i < triplet.size() - 1 ? ", " : "");
        }
        cout << "]" << endl;
    }

    return 0;
}
