//Georgia Sugisandhea_535230080
#include<iostream>
#include<string>
using namespace std;

void suhu(string n, float x, float &hasil, string &s)
{
	if(n=="c"||n=="C")
	{
		hasil=((9/5)*x)+32;
		s=" derajat Fahrenhait";
	}
	else
	{
		hasil=(x-32)*5/9;
		s=" derajat Celcius";	
	}
}

int main()
{
	string n, s;
	float x, hasil;
	
	cout<<"Masukkan suhu anda (cth= 50 C/98 F)= ";
	cin>>x>>n;
	suhu(n, x, hasil, s);
	cout<<"Hasil konversi suhu anda adalah "<<hasil<<s;
}