#include <iostream>
using namespace std;

int main() {
    int n, i = 1, sum = 0;

    cout << "Enter the value of n: ";
    cin >> n;

    while (i <= n)
	 {
        sum += i;
        i++;
    }

    cout << "The sum of the first " << sum;

    return 0;
}
