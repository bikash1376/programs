#include "bits/stdc++.h"

using namespace std;

int main() {
    // Create a vector to store pairs of int and string
    vector<pair<int, string>> v;

    // Add some pairs to the vector directly using pair constructor
    v.emplace_back(1, "one");
    v.emplace_back(2, "two");
    v.emplace_back(3, "three");

    // Iterate over the vector and print the pairs
    for (const auto& p : v) {
        cout << "Number: " << p.first << ", Word: " << p.second << endl;
    }

    return 0;
}
