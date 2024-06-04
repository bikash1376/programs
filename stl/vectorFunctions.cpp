#include "bits/stdc++.h"

using namespace std;

int main() {
    // Creating vectors
    vector<int> v1; // O(1) time, O(1) space
    vector<int> v2(5, 10); // O(n) time, O(n) space
    vector<int> v3 = {1, 2, 3, 4, 5}; // O(n) time, O(n) space

    // Pushing elements
    v1.push_back(1); // Amortized O(1) time, O(1) space
    v1.push_back(2); // Amortized O(1) time, O(1) space
    v1.push_back(3); // Amortized O(1) time, O(1) space

    // Popping elements
    v1.pop_back(); // O(1) time, O(1) space

    // Comparing vectors
    if (v1 == v3) { // O(n) time, O(1) space
        cout << "v1 is equal to v3" << endl;
    } else {
        cout << "v1 is not equal to v3" << endl;
    }

    // Sorting vector
    sort(v3.begin(), v3.end(), greater<int>()); // O(n log n) time, O(1) space for in-place sort
    cout << "Sorted v3 in descending order: ";
    for (const auto& el : v3) { // O(n) time, O(1) space
        cout << el << " ";
    }
    cout << endl;

    // Getting the size
    cout << "Size of v1: " << v1.size() << endl; // O(1) time, O(1) space
    cout << "Size of v2: " << v2.size() << endl; // O(1) time, O(1) space
    cout << "Size of v3: " << v3.size() << endl; // O(1) time, O(1) space

    // Searching for an element
    auto it = find(v3.begin(), v3.end(), 3); // O(n) time, O(1) space
    if (it != v3.end()) {
        cout << "Element 3 found in v3 at position: " << distance(v3.begin(), it) << endl; // O(1) time, O(1) space
    } else {
        cout << "Element 3 not found in v3" << endl;
    }

    // Inserting elements
    v1.insert(v1.begin(), 0); // O(n) time, O(1) space for shifting elements
    cout << "v1 after inserting 0 at the beginning: ";
    for (const auto& el : v1) { // O(n) time, O(1) space
        cout << el << " ";
    }
    cout << endl;

    // Erasing elements
    v1.erase(v1.begin() + 1); // O(n) time, O(1) space for shifting elements
    cout << "v1 after erasing the second element: ";
    for (const auto& el : v1) { // O(n) time, O(1) space
        cout << el << " ";
    }
    cout << endl;

    // Clearing the vector
    v1.clear(); // O(n) time, O(1) space
    cout << "Size of v1 after clearing: " << v1.size() << endl; // O(1) time, O(1) space

    return 0;
}
