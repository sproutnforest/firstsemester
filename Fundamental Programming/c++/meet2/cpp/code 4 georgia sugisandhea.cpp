//Georgia Sugisandhea - Kelas C - 535230080

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Masukkan nilai a= ";
	cin>>a;
	cout<<"Masukkan nilai b= ";
	cin>>b;
	cout<<"Masukkan nilai c= ";
	cin>>c;
	
	if(a>b)
	{
		if(c>a)
		cout<<"Nilai terbesar adalah c= "<<c<<endl;
		
		else
		cout<<"Nilai terbesar adalah a= "<<a<<endl;
	}
	else
	{
		if(b>c)
		cout<<"Nilai terbesar adalah b= "<<b<<endl;
		
		else
		cout<<"Nilai terbesar adalah c= "<<c<<endl;
	}
	
	return 0;
}