#include<iostream>
using namespace std;
class gf
{
	int r=10;
	public:
		
		void getdata()
		{
			cout<<"\nbase class r"<<r;
		}
};
class f:public virtual gf
{
	
};
class m:public gf
{

};
class c:public f,public m
{
	int r3=10;
	public:
		void getdata3()
		{
			cout<<"\ndervied dervird class r3"<<r3;
		}
};
	

int main()
{
	c a;
	a.getdata3();
}
