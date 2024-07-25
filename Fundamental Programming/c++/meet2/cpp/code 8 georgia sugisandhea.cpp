//Georgia Sugisandhea - Kelas C - 535230080

#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main ()
{
	int a,b,c ;
	string max;
	
	cout<<"Masukkan nilai a= ";
	cin>>a;
	
	cout<<"Masukkan nilai b= ";
	cin>>b;
	
	cout<<"Masukkan nilai c= ";
	cin>>c;
	
	if((a>b)&&(a>c))
	max = "a";
	
	if((b>a)&&(b>c))
	max = "b";
	
	if((c>a)&&(c>b))
	max = "c";
	
	cout<<"Nilai terbesar adalah "<<max<<endl;
	
	return 0;
}