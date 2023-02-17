#include<iostream>
using namespace std;
class student
{
	int r;
	public:
		void getdata()
		{
			cout<<"enter roll no=";
			cin>>r;
		}
};
class test:public student
{
	int m,n;
	public:
		void getdata1()
		{
			cout<<"enter the test marks";
		}
};
class result:public student
{
	int tot,m,n;
	public:
		void getdata2()
		{
			cout<<"enter values of m and n=";
			cin>>m>>n;
			tot=m+n;
			cout<<"enter total marks"<<tot;
			cin>>tot;
		}
};
int main()
{
	result r;
	r.getdata();
	r.getdata2();
}
