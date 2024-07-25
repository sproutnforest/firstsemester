//Georgia Sugisandhea_535230080
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	float fxn(float x, int n);
	float fxy(float x, float y);
	int cicilan(float p, float i, float t);
	float x, y, p, i, t, hasil;
	int n, pilih, hasil2;
	pilih=4;
	
	while(pilih>3)
	{
	
	cout<<"Rumus manakah yang ingin kalian operasikan? "<<endl;
	cout<<"1. f(x, n) = 1/(x ^ n * ((e ^ 1.432)/x - 1))"<<endl;
	cout<<"2. f(x, y) = (x ^ 2 - y ^ 2)/(x ^ 2 + y ^ 2)"<<endl;
	cout<<"3. Rumus cicilan bulanan"<<endl;
	cout<<"Masukkan 1, 2, atau 3= ";
	cin>>pilih;
	
	switch(pilih)
	{
		case 1: 
		{
			cout<<"Masukkan bilangan x= ";
			cin>>x;
			cout<<"Masukkan bilangan n= ";
			cin>>n;
			hasil=fxn(x,n);
			cout<<"Hasil rumus tersebut adalah "<<hasil;
			return 0;
		}
		
		case 2:
		{
			cout<<"Masukkan bilangan x= ";
			cin>>x;
			cout<<"Masukkan bilangan y= ";
			cin>>y;
			hasil=fxy(x,y);
			cout<<"Hasil rumus tersebut adalah "<<hasil;
			return 0;
		}
		
		case 3:
		{
			cout<<"Masukkan pokok pinjaman= ";
			cin>>p;
			cout<<"Masukkan suku bunga= ";
			cin>>i;
			cout<<"Masukkan periode kredit= ";
			cin>>t;
			hasil2=cicilan(p,i,t);
			cout<<"Cicilan anda adalah Rp."<<hasil2;
			return 0;
		}
		default:     
		{
			cout<<"Maaf kode yang anda pilih salah, silahkan coba lagi"<<endl;
			pilih=4;
		}
	}
	}
}

float fxn(float x, int n)
{
	float hasil;
	hasil= 1/((pow(x,n)) * (((4.187065)/x) - 1));
	return hasil;
}


float fxy(float x, float y)
{
	float hasil;
	hasil=(pow(x,2)-pow(y,2))/(pow(x,2)+pow(y,2));
	return hasil;
}

int cicilan(float p, float i, float t)
{
	float hasil;
	hasil=(p*i*pow((i+1),t))/((pow((i+1),t))-1);
	return hasil;
}