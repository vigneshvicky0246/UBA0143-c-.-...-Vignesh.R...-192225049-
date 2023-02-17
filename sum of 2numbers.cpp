#include<iostream.h>
using namespace std;
class sum
{
	int x,y;
	public:
		void getdata()
		{
			cout<<"enter x and y value";
			cin>>x>>y;
		}
		void display()
		{
			cout<"sum of two numbers"<<x+y;
		}
};
int main()
{ sum s;
s.getdata();
s.display();
}
