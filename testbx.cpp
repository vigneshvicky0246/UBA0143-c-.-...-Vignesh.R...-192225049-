#include<iostream>
using namespace std;
int main ()
{
	int lr,cr,bill;
	cin>>lr>>cr;
	bill=lr-cr;
	cout<<"\nenter a lr "<<lr;
	cout<<"\nenter a cr "<<cr;
	cout<<"\nyou bill amount "<<bill;
	{
		if(bill<=100)
		cout<<"\nyou bill amt is"<<bill*1.00;
		else if((bill>101)&&(bill<200))
		cout<<"\nyor bill amt is "<<bill*1.75;
		else if((bill>201)&&(bill<300))
		cout<<"\nyor bill amt is "<<bill*2.50;
		else
		cout<<"\nyor bill amt is "<<bill*5.00;
		return 0;
		}
	
}
