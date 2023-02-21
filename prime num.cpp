#include <iostream>
using namespace std;
int main()
{
    int n,i,j=0;
	cin>>n;
    for (i=1;i<=n;i++)
        if (n%i==0)
           j++;
    if(j==2)
		 cout<<"Prime number";
    else
         cout << "not a Prime number"; 
    return 0;    
}
