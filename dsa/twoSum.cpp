#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> numMap; // Create a hash map to store numbers and their indices
    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i]; // Calculate the complement of the current number
        if (numMap.find(complement) != numMap.end()) { // Check if the complement exists in the hash map
            return {numMap[complement], i}; // Return the indices of the complement and the current number
        }
        numMap[nums[i]] = i; // Add the current number and its index to the hash map
    }
    return {}; // Return an empty vector if no solution is found
}

int main() {
    vector<int> nums = {2, 7, 11, 15}; // Example input array
    int target = 9; // Example target sum

    vector<int> result = twoSum(nums, target); // Call the twoSum function

    // Print the result
    if (!result.empty()) {
        cout << "Indices: [" << result[0] << ", " << result[1] << "]" << endl;
    } else {
        cout << "No solution found." << endl;
    }

    return 0;
}
