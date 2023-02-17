#include<iostream>
using namespace std;
class sum
{
	public:
	void getdata();
};
void sum::getdata()
{  int x,y;
   cin >>x>>y;
   cout <<"sum of"<<+x+y;
}
int main()
{
	sum s;
	s.getdata();
}
