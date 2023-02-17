#include<iostream>
using namespace std;
class inventory 
{
	int item_no,quantity,price;
	char item_name[100];
	public:
		inventory()
		{
			item_no=0;
			quantity=0;
			price=0;
			
		}
	};
	
		inventory(int x,char y[100],int z,int w)
		{
			 item_no=x;
			 item_name=y[100];
			 price=z;
			 quantity=x;
		
		}
		void diplay()
		{
			cout<<"item_no"<<x;
			cout<<"item_name"<<y[100];
			cout<<"price"<<z;
	        cout<<"quantity"<<x;
			 
		}
		void main()
		{
			inventory i,i1(1,"pen",10,100);
			i.display();
			//i.inventory()
		}

