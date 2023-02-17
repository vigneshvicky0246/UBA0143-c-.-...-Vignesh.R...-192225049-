#include<iostream>
using namespace std;
class sample
{
	int id;
	public:
		void init(int x)
		{
		id=x;
	}
	sample()
	{}
	sample(sample & t)
	{
	id=t.id;
		
	}
	void display()
	{
	cout<<"\nid="<<id;

	}
};
	int main()
	{
		sample s1;
		s1.init(1);
		s1.display();
		sample s2;
		s2.display();
		return 0;
		
	}
	
		

	
