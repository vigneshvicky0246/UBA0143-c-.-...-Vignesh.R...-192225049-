#include <iostream>
using namespace std;
int main()
{
    int number;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> number;

    for (int i = 1; i < number; i++)
    {
        if (number % i == 0)
        {
            sum += i;
        }
    }

    if (sum == number)
    {
        cout << number << " is a perfect number";
    }
    else
    {
        cout << number << " is not a perfect number";
    }
    return 0;
}
