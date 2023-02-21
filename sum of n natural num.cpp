
#include<iostream>
using namespace std;

int main()
{
    int n, sum = 0;
	int a[n],i;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the numbers: ";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    cout << "Sum: " << sum;
    return 0;
}
