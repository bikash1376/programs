#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Creating a vector and initializing it with some values
    vector<int> vec = {1, 2, 3, 4, 5};

    // Using iterator to access elements (it is iterator)
    cout << "Elements of the vector using iterators:" << endl;
    for (auto it = vec.begin(); it != vec.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Using reverse iterator to access elements in reverse (rit is reverse iterator)
    cout << "Elements of the vector in reverse using reverse iterators:" << endl;
    for (auto rit = vec.rbegin(); rit != vec.rend(); ++rit) {
        cout << *rit << " ";
    }
    cout << endl;

    // Using const iterator to access elements without modification
    const vector<int> constVec = {10, 20, 30, 40, 50};
    cout << "Elements of the const vector using const iterators:" << endl;
    for (auto cit = constVec.cbegin(); cit != constVec.cend(); ++cit) {
        cout << *cit << " ";
    }
    cout << endl;

    // Using iterator-based algorithms like find and accumulate
    auto it = find(vec.begin(), vec.end(), 3);
    if (it != vec.end()) {
        cout << "Found element 3 at index " << distance(vec.begin(), it) << endl;
    }

    int sum = accumulate(vec.begin(), vec.end(), 0);
    cout << "Sum of elements in the vector: " << sum << endl;

    return 0;
}
