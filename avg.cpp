#include<iostream>
using namespace std;
class student
{
	int regno,total,m1,m2,m3,A,b,c,a;
	char name[20];
	public:
		void student::getdata();
		{
			cout<<"enter student name:";
			cin>>name;
			cut<<"enter regno:";
			cin>>regno;
			cout<<"enter m1,m2,m3";
			cin>>m1>>m2>>3;
		}
		void student::calculation();
		{
			total=m1+m2+m3;
			cout<<"total marks"<<total;
			avg=(m1+m2+m3)/3;
			cout<<"average marks"<<avg;
		}
		void student::display();
		{
			if(a>75)
			{
				cout<<"grade is A";
			}
			else if
			{
				cout<<"grade is B";
			}
			else if 
			{
				cout<<"grade is c";
			}
			else
			{
				cout<<"fail";
			}
		}
};
		void main()
		{
			student s;
			s.getdata();
			s.caluculation();
			s.display();
		}
		}
