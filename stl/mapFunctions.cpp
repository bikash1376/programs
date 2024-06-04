#include <iostream>
#include <map>

using namespace std;

int main() {
    // Creating a map and inserting elements
    map<string, int> ages;
    ages["Alice"] = 30;
    ages["Bob"] = 25;
    ages["Charlie"] = 35;

    // Accessing elements
    cout << "Bob's age is " << ages["Bob"] << endl;

    // Iterating over elements (it is the iterator)
    cout << "All ages:" << endl;
    for (auto it = ages.begin(); it != ages.end(); ++it) {
        cout << it->first << ": " << it->second << endl;
    }

    // Checking if a key exists
    if (ages.find("David") != ages.end()) {
        cout << "David's age is " << ages["David"] << endl;
    } else {
        cout << "David's age is not in the map" << endl;
    }

    // Erasing an element
    ages.erase("Charlie");

    // Checking the size of the map
    cout << "Number of elements in the map: " << ages.size() << endl;

    // Clearing the map
    ages.clear();

    // Checking if the map is empty
    if (ages.empty()) {
        cout << "The map is empty" << endl;
    } else {
        cout << "The map is not empty" << endl;
    }

    return 0;
}
