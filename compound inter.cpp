#include<iostream>
#include<math.h>
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
			cout<<"enter a rate of interest: ";
			cin>>r;
			cout<<"\n compound interest:"<<p*(1+r/100);
			cout<<"\n comp interest:"<<p*(pow(1+r/100,t));
		}
};
int main()
{
	sum s;
	s.getdata();
	return 0;

}
