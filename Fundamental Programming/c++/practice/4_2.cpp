#include<iostream>
using namespace std;

int main()
{
	float cel, fah;
	int pil=3;
	void ckf(float cel, float &fah);
	void fkc(float fah, float &cel);
	
	while(pil!=1 && pil!=2)
	{
		cout<<"1. Celcius ke Fahrenheit"<<endl;
		cout<<"2. Fahrenheit ke Celcius"<<endl;
		cout<<"Masukan kode pilihan = ";
		cin>>pil;
		
		if(pil==1)
		{
			cout<<"Masukkan derajat celcius ";
			cin>>cel;
			ckf(cel, fah);
			cout<<"Untuk "<<cel<<" derajat celcius, dihasilkan "<<fah<<" derajat fahrenheit"<<endl;
		}
		else if(pil==2)
		{
			cout<<"Masukkan derajat fahrenheit ";
			cin>>fah;
			fkc(fah, cel);
			cout<<"Untuk "<<fah<<" derajat fahrenheit, dihasilkan "<<cel<<" derajat celcius"<<endl;
		}
		else
		{
			cout<<"Kode tidak ditemukan, silahkan coba lagi "<<endl;
		}
	}
}
void ckf(float cel, float &fah)
{
	fah=cel*9/5+32;
}

void fkc(float fah, float &cel)
{
	cel=(fah-32)*5/9;
}

//10minutes