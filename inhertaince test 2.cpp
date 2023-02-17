#include<iostream>
using namespace std;
class account
{
	int acc=525252526;
	public:
		void getdata()
		{
			cout<<"account "<<acc;
		}
	};
class user
{
	char user[20]="AK";
	public:
		void getdata1()
		{
			cout<<"\nuser name "<<user;
		}
	};
class saving:public account,public user
{
	int saving=2500000;
	public:
		void getdata2()
		{
			cout<<"\nsaving "<<saving;
		}
	};
int main()
{
	saving b;
	b.getdata();
	b.getdata1();
	b.getdata2();
}

