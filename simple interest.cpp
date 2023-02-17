#include<iostream.h>
using namespace std;
class sum
{
	float p,t,r;
	public:
		void getdata()
		{
			cout<<"enter a principal amount:";
			cin>>p;
			cout<<"enter a year : ";
			cin>>t;
			cout<<"\n enter a rate of interest: ";
			cin>>r;
			cout<<"\n simple interest:"<<p*t*r/100;
		}
};
int main()
{
	sum s;
	s.getdata();
	return 0;

}
