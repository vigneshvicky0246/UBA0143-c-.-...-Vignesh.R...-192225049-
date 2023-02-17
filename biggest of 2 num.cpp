#include<iostream>
using namespace std;
class sum
{
	int x,y;
	public:
		void getdata()
		{
			cout<<"enter a x and y:";
			cin>>x>>y;
			if(x>y)
			cout<<"x is greater than y";
			else
			cout<<"y is greater than x";
			
		}
};
int main()
{
	sum s;
	s.getdata();
	return 0;
}
		
