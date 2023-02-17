#include<iostream>
using namespace std;
class customer
{
	char name[50];
	int ph;
	public:
		void getdata()
		{
			cin>>name>>ph;
			cout<<"\n name"<<name;
			cout<<"\n ph no"<<ph;
		}
	};
class depositer:public customer
{
	int acc_no,balance;
	public:
		void getdata1()
		{
			cin>>acc_no>>balance;
			cout<<"\n account no"<<acc_no;
			cout<<"\n balance"<<balance;
		}
	};
class barrow:public depositer
{
	int loanno,loanamt;
	public:
		void getdata2()
		{
			cin>>loanno>>loanamt;
			cout<<"\n loan no"<<loanno;
			cout<<"\n loan amt"<<loanamt;
		}
	};
int main()
{
	barrow a;
	a.getdata();
	a.getdata1();
	a.getdata2();
}
