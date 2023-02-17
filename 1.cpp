
#include<iostream>
using namespace std;
class a
{
	int  x=5;
	public:
		void getdata()
		{
		cout<<"\nbase class"<<x;
		}
};
class b:public a
{
	int y=5;
	public:
		void getdata1()
		{
			cout<<"\ndervied class"<<y;
			
		}
};
int main()
{
	b s;
	s.getdata();
	s.getdata1();
}

