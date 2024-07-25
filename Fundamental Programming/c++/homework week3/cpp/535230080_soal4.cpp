//535230080_Georgia Sugisandhea
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n, t, x;
	n= 1+ (rand() % 100);
	for(t=1; t<=10; t++)
	{
		cout<<"Masukkan angka tebakan kalian= ";
		cin>>x;
		if(x<n)
			cout<<"Angka yang kalian masukkan terlalu kecil"<<endl;
		else if(x>n)
			cout<<"Angka yang kalian masukkan terlalu besar"<<endl;
		else
			break;
	}
	if(x==n)
		cout<<"Selamat anda berhasil menebak angkanya";
	else
		cout<<"Maaf anda tidak berhasil menebak angkanya";
	
	return 0;
}