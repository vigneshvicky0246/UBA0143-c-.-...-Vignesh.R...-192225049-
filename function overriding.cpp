#include<iostream>>
using namespace std;
class a 
{ 
int y=22;
public:
	virtual void getdata()
	{
		cout<<"\nbase class "<<y;
	}
};
class b:public a 
{
int x=10;
public:
	void getdata()
	{
		cout<<"\ndervied class "<<x;
		
	}
};
int main() 
{
	b *e;
	a c;
	c=&e;
	c->getdata();
	e->getdata();
}
