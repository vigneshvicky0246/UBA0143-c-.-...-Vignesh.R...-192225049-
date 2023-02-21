#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, originalNum, remainder, n = 0;
    double result = 0.0;

    cout << "Enter a positive integer: ";
    cin >> num;

    originalNum = num;

    // count number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // calculate sum of nth power of digits
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    // check if number is an Armstrong number
    if (result == num)
        cout << num << " is an Armstrong number.";
    else
        cout << num << " is not an Armstrong number.";

    return 0;
}

