//Georgia Sugisandhea - Kelas C - 535230080

#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	int a,b;
	cout<<"Masukkan nilai a ";
	cin>>a;
	cout<<"Masukkan nilai b ";
	cin>>b;
	
	if(a>b)
	{
		cout<<"Untar"<<endl;
		cout<<"Nilai a= "<<a<<" lebih besar dari nilai b= "<<b<<endl;
	}
	else
	{
		cout<<"FTI"<<endl;
		cout<<"Nilai a= "<<a<<" tidak lebih besar dari nilai b= "<<b<<endl;
	}
}