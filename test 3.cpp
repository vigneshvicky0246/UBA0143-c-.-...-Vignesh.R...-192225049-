#include<iostream>
using namespace std;
int main()
{
	int sal,tax,asal;
	cin>>sal;
	asal=sal*12;
	cout<<"\n"<<asal;
	if(asal<=300000)
	cout<<"\n your tax amt is nil ";
	else if((asal>300000)&&(asal<=700000))
	cout<<"\n your tax amt is "<<asal*0.05;
    else if((asal>700000)&&(asal<=1000000))
	cout<<"\n your tax amt is "<<asal*0.1;
	else if((asal>1000000)&&(asal<=1200000))
	cout<<"\n your tax amt is "<<asal*0.15;
	else if((asal>1200000)&&(asal<=1500000))
	cout<<"\n your tax amt is "<<asal*0.2;
	else
	cout<<"\n your tax amt is "<<asal*0.3;
	return 0;
}
