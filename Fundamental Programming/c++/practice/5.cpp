#include<iostream>
#include<string>
using namespace std;

	struct rumah
	{
		char tipe[15];
		float luas;
		int tahun;
	};
	
	struct sehat
	{
		char nama[20];
		char alamat[30];
		char ktp[16];
	};
	
	struct didik
	{
		char name[20];
		string lahir;
		string tempo;
	};
	
	struct polo
	{
		char polis[16];
		char ireum[20];
		string address;
		char noktp[16];
		int besaras;
		int lama;
		int premi;
		string pembuatan;
	};
	
	
int main()
{
	int n, fin[5];
	polo def[5];
	for(n=0; n<=5; n++)
	{
		cout<<n+1<<". "<<endl;
		cout<<"Nama = ";
		cin>>def[n].ireum;
		cout<<"Nomor polis = ";
		cin>>def[n].polis;
		cout<<"Alamat yang ditanggung = ";
		cin>>def[n].address;
		cout<<"Nomor ktp = ";
		cin>>def[n].noktp;
		cout<<"Besar asuransi = ";
		cin>>def[n].besaras;
		cout<<"Lama tanggungan(bulan) = ";
		cin>>def[n].lama;
		cout<<"Besar premi = ";
		cin>>def[n].premi;
		cout<<"Tanggal pembuatan asuransi = ";
		cin>>def[n].pembuatan;
		
		fin[n]=(5000*def[n].besaras*def[n].lama)+def[n].premi;
		
		cout<<n+1<<". "<<endl;
		cout<<"Nama = "<<def[n].ireum<<endl;
		cout<<"Nomor polis = "<<def[n].polis<<endl;
		cout<<"Alamat yang ditanggung = "<<def[n].address<<endl;
		cout<<"Nomor ktp = "<<def[n].noktp<<endl;
		cout<<"Besar asuransi = "<<def[n].besaras<<endl;
		cout<<"Lama tanggungan(bulan) = "<<def[n].lama<<endl;
		cout<<"Besar premi = "<<def[n].premi<<endl;
		cout<<"Tanggal pembuatan asuransi = "<<def[n].pembuatan<<endl;
		cout<<"Tagihan bayaran = "<<fin[n]<<endl;
	}
}