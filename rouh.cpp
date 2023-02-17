#include<iostream>
using namespace std;
class salary
{
	int empno,hra,da,ta,pf,lic,bp,gross,deduction ,net;
	char name empname[20];
	public:
		salary()
		{}
		salary(intx,char[20])
		{
			cout<<"enter empno:";
			cin>>empno;
			cout<<"enter empname:";
			cin>>empname;
			cout<<"enter basic salary:";
			cin>>basic salary;
		}
		salary(int a,int b,int c,int d,int e)
		void calculation()
		{
			hra=bp*10/100
			da=bp*12/100
			ta=bp*12/100
			pt=bp*5/100
			lic=bp*7/100
		}
		void display()
		cout<<"gross=hra+da+ta";
		cin>>gross;
		cout<<"deduction=pt+lic";
		cin>>education;
		cout<<"net=bp+hra,da+hra+da+ta+pt+lic";
		cin>>net
	};
	int main()
	{
	salary s;
	s.getdata();
	s.calculation();
	s.voidsplay();
	}
