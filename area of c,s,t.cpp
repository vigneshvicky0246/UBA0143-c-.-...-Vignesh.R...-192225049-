#include<iostream>
using namespace std;
class area
{
	int r,a,b,circle,square,triangle;
	public:
		void getdata()
		{
			cout<<"enter r,a,b values:";
			cin>>r>>a>>b;
		}
		void calculation()
		{
			area of circle:2*3.14*r;
			area of square:4a;
			area of triangle:1/2*b*h;
		}
		void display
		{
			cout<<"area of circle:";
			cin>>r;
			cout<<"area of square:";
			cin>>a;
			couy<<"area of triangle:";
			cin>>b;
		}
};
int main()
{
	area a;
	a.getdata();
	a.display();
}
