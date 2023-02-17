#include<iostream>
using namespace std;
class fruits
{
	public:
		void getdata()
		{
			cout<<"fruits=20";
		}
};
class apples:public fruits
{
	public:
		void getdata1()
		{
			cout<<"apples=10";
		}
};
class mangoes:public fruits
{
	public:
		void getdata2()
		{
			cout<<"mangoes=10";
		}
};
int main()
{
	mangoes m;
	m.getdata();
	m.getdata2();
	apples a;
	a.getdata1();
}
