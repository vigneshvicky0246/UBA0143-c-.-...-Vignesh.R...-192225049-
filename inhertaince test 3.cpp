#include<iostream>
using namespace std;
class staff
{
	char name[100]="tunivu";
	int staffno=525252526;
	float salary=45000.22;
	public:
		void getdata()
		{
			cout<<"\n name\t"<<name;
			cout<<"\n staff no\t"<<staffno;
			cout<<"\n salary\t"<<salary;
		}
	};
class ts:public staff
{
	char sub[20]="tamil";
	public:
		void getdata1()
		{
			cout<<"\n subject\t"<<sub;
		}
	};
class nt:public ts
{
	char pos[20]="admin";
	public:
		void getdata2()
		{
			cout<<"\n pos\t"<<pos;
		}
	};
int main()
{
	nt s;
	s.getdata();
	s.getdata1();
	s.getdata2();
}

