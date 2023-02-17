#include<iostream>
using namespace std;
class sum
{
	int n,r,m1,m2,m3,T;
	public:
		void getdata()
		{
			cout<<"student name:";
			cin>>n;
			cout<<"register no:";
			cin>>r;
			cout<<"masrks 1:";
			cin>>m1;
			cout<<"marks 2:";
			cin>>m2;
			cout<<"marks 3:";
			cin>>m3;
			cout<<"\n total:"<<m1+m2+m3;
			cout<<"\n average:"<<m1+m2+m3/3;
		}
};
int main()
{
	sum s;
	s.getdata();
	return 0;
}
