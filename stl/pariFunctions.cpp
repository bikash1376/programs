#include "bits/stdc++.h"

using namespace std;

int main() {
    // Create pairs using different methods
    pair<int, string> p1(1, "one");
    pair<int, string> p2 = make_pair(2, "two");
    pair<int, string> p3 = {3, "three"};

    // Print pairs
    cout << "Pairs created:" << endl;
    cout << "p1: (" << p1.first << ", " << p1.second << ")" << endl;
    cout << "p2: (" << p2.first << ", " << p2.second << ")" << endl;
    cout << "p3: (" << p3.first << ", " << p3.second << ")" << endl;

    // Assign pairs
    pair<int, string> p4;
    p4 = p1;
    cout << "After assignment, p4: (" << p4.first << ", " << p4.second << ")" << endl;

    // Compare pairs
    if (p1 == p4) {
        cout << "p1 is equal to p4" << endl;
    } else {
        cout << "p1 is not equal to p4" << endl;
    }

    if (p1 < p2) {
        cout << "p1 is less than p2" << endl;
    } else {
        cout << "p1 is not less than p2" << endl;
    }

    // Use pairs in a vector
    vector<pair<int, string>> v;
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(pair<int, string>(4, "four"));

    // Sort vector of pairs
    sort(v.begin(), v.end());
    cout << "Sorted vector of pairs:" << endl;
    for (const auto& p : v) {
        cout << "(" << p.first << ", " << p.second << ")" << endl;
    }

    // Find a pair in the vector
    auto it = find(v.begin(), v.end(), make_pair(2, "two"));
    if (it != v.end()) {
        cout << "Found pair: (" << it->first << ", " << it->second << ")" << endl;
    } else {
        cout << "Pair not found" << endl;
    }

    // Modify pairs in the vector
    for (auto& p : v) {
        p.second = "modified_" + p.second;
    }
    cout << "Modified vector of pairs:" << endl;
    for (const auto& p : v) {
        cout << "(" << p.first << ", " << p.second << ")" << endl;
    }

    return 0;
}
