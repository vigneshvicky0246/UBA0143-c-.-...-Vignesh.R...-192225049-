#include<iostream>
using namespace std;
class arti
{
	int x,y,exp;
	public:
		void getdata();	
};
void arti::getdata()
{
	cin>>x>>y>>exp;
	switch(exp)
{
	case 1:
		cout<<"add"<<x+y;
	break;
	case 2:
		cout<<"sub"<<x-y;
	break;
	case 3:
		cout<<"mult"<<x*y;
	break;
	case 4:
		cout<<"divid"<<x/y;
	break;
	default:
		cout<<"give your choice";
	
}
}
int main()
{
	arti s;
	s.getdata();
	return 0;
}
	
