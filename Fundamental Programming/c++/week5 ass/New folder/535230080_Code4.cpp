//Georgia Sugisandhea_535230080_KelasC
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	string nama[20];
	int a, n, t;
	float nilai[10], jumlah=0, avg;
	
	cout<<"Ketikkan jumlah mahasiswa: ";
	cin>>n;
	
	for(a=0; a<n; a++)
	{
		cout<<"Ketikkan nama mahasiswa ke "<<a+1<<" : ";
		cin>>nama[a];
		cout<<"Ketikkan nilai mahasiswa ke "<<a+1<<" : ";
		cin>>nilai[a];
		jumlah = jumlah + nilai[a];
	}
	
	t=1;
	avg=jumlah/n;
	cout<<"Rata-rata= "<<avg<<endl<<endl;
	cout<<"Daftar mahasiswa yang nilainya lebih tinggi dari rata rata "<<endl;
	for(a=0; a<n; a++)
	{
		if (nilai[a]>avg)
		{
			cout<<t<<". Nama : "<<nama[a]<<". Nilai : "<<nilai[a]<<endl;
			t++;
		}
	}
	return 0;
}