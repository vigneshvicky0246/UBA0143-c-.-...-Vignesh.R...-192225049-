#include<iostream>
using namespace std;
int main()
{
	int i,n,sum=0;
	cout<<"enter the number=";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		sum+=i;
	}
	cout<<"the sum of N number is= "<<sum;
}
