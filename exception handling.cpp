#include<iostream>
using namespace std;
int main()
{
	int x=5,y=0,z;
	try
	{
		z=x/y;
		throw (z);
	}
	catch (exception z)
	{
		cout<<"divid by zero";
	
	}
}
