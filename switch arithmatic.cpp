#include<iostream>
using namespace std;
int main()
{
	int numa,numb,exp;
	cout<<"enter a numa";
	cin>>numa;
	cout<<"enter a numb";
	cin>>numb;
	cin>>exp;
	switch(exp)
	{
		case 1:
			cout<<"sum"<<numa+numb;
		break;
		case 2:
			cout<<"sub"<<numa-numb;
		break;
		case 3:
			cout<<"mult"<<numa*numb;
		break;
		case 4:
			cout<<"div"<<numa/numb;
		break;
		case 5:
			cout<<"modulo"<<numa%numb;
		break;
		default:
			cout<<"enter your oyun choice";
			return 0;
	
			
	}
}
