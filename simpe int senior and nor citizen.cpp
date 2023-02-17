#include<iostream>
using namespace std;
int main()
{
	float p,t,r;
	int exp;
	cout<<"enter a principal amount:";
	cin>>p;
	cout<<"enter a year : ";
	cin>>t;
	cout<<" senior citizen ikku yaan 1 alithuvam";
	cout<<"\n junior citizen ikku yaan 2 alithuvam";
	cin>>exp;
	switch(exp)
	{
	
	case 1:
		cout<<"\n simple interest:"<<p*t*0.12/10;
		cout<<"\n compound interest:"<<p*(1+0.12/100);
	break;
	case 2:
		cout<<"\n simple interest:"<<p*t*0.1/100;
		cout<<"\n compound interest:"<<p*(1+0.1/100);
	break;
	default:
		cout<<"not a citizen";
		return 0;
}
}
