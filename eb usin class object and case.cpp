#include<iostream>
using namespace std;
class eb
{
	int lr,cr,bill,exp;
	public:
		void getdata();	
};
void eb::getdata()
{
	cout<<"\n enter a last month reading";
	cin>>lr;
	cout<<"\n enter a current month reading";
	cin>>cr;
	cin>>exp;
	bill=lr-cr;
	cout<<"reading is:"<<bill;
	switch(exp)
{
	case 1:
		if(bill<=100)
		cout<<"nill";
		else if ((bill>101)&&(bill<=200))
		cout<<"amount to be pay"<<bill*1.5;
		else if ((bill>201)&&(bill<300))
		cout<<"amount to be pay"<<bill*1.75;
		else
		cout<<"amount to be pay"<<bill*3.00;
	break;
	case 2:
		if(bill<=100)
		cout<<"amount to be pay"<<bill*1.00;
		else if ((bill>101)&&(bill<=200))
		cout<<"amount to be pay"<<bill*3.00;
		else if ((bill>201)&&(bill<300))
		cout<<"amount to be pay"<<bill*4.75;
		else
		cout<<"amount to be pay"<<bill*8.00;
	break;

	default:
		cout<<"give your choice";
	
}
}
int main()
{
	eb s;
	s.getdata();
	return 0;
}
	
