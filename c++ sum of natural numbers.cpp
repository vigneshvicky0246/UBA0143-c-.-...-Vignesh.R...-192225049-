 #include <iostream>
 using namespace std;
 class message
 {
 	int s,n,i;
 	public:
 		int getdata ()
 		{
		while(i<n)
		{
			s=s+i;
			i=i+1;
		}
 		cout<<s;
 		cout<<"sum of sum of natural numbers";
		 }
};
int main()
{
	message m;
	m.getdata();
}
