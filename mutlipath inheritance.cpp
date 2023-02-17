#include<iostream>
using namespace std;
class person
{
	public:
		void getdata()
		{
			cout<<"base class=";
		}
};
class account:public person
{
	public:
		void getdata1()
		{
			cout<<"derived class=";
		}
};
class admin:public person
{
	public:
		void getdata2()
		{
			cout<<"derived class 1=";
		}
};
class master: public account,public admin
{
	public:
		void getdata3()
		{
			cout<<"derived from derived class=";
		}
};
int main()
{
master m;
m.getdata3();
m.getdata2();
m.getdata1();
person p;
p.getdata();
}
