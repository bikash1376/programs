#include <iostream>  // This library is used for input and output operations

using namespace std;  // This line allows us to use standard functions without prefixing 'std::'


int main() {
    int num1, num2, sum;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    sum = num1 + num2;

    cout << "The sum of " << num1 << " and " << num2 << " is " << sum << endl;

    return 0;
}
