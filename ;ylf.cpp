#include<iostream>
using namespace std;
class customer
{
	char name[100]="tunivu";
	long int ph=1234567890;
	public:
		void getdata()
		{
			cout<<"\n name"<<name;
			cout<<"\n ph no"<<ph<<"\n";
		}
	};
class depositer:public customer
{
	int acc_no=5252,balance=2500;
	public:
		void getdata1()
		{
			cout<<"\n account no"<<acc_no;
			cout<<"\n balance"<<balance;
		}
	};
class barrow:public depositer
{
	long long int loanno=525987,loanamt=25000000000;
	public:
		void getdata2()
		{
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

