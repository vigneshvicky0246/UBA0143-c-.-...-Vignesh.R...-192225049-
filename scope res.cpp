#include<iostream>
using namespace std;
class biggest
{
	int x,y;
	public:
		void getdata();
		
	};
	void biggest::getdata()
	{
		cin>>x>>y;
			if(x>y)
			cout<<"x is greater than y";
			else
			cout<<"y is greater than x";	
	}
int main()
{
	biggest s;
	s.getdata();
	return 0;
}
	
