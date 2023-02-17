#include<iostream>
using namespace std;
class sum
{
	int x,y;
	public:
		void getdata()
		{
			cout<<"enter a number:";
			cin>>x>>y;
			cout<<"sum of 2 num is :"<<x+y;
		}
};
int main()
{
	sum s;
	s.getdata();
	return 0;
	
	
}

