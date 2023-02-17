#include<iostream>
using namespace std;
int main()
{
	int x;
	try
	{
		x=5/0;
		throw x;
	}
	catch(exception t)
	{
		cout<<"divide by zero";
	}
};
