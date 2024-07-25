#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main()
{
	float transaksi, total, diskon, pr, bl, bersih;
	string kredit, ty;
	
	cout<<"Selamat datang di restoran XYZ"<<endl;
	cout<<"Berapa total transaksi anda? ";
	cin>>transaksi;
	cout<<"Apakah anda menggunakan kartu kredit ABC? (Y/T) ";
	cin>>kredit;
	
	bersih = transaksi+(transaksi*0.11)+(transaksi*0.05);
	
	if(kredit=="T" && transaksi>=500000)
	{
		diskon = bersih*0.1;
		total = bersih-diskon;
		ty = " ";
	}
	else if(kredit=="Y" && transaksi>=500000)
	{
		diskon = bersih*0.25;
		total = bersih-diskon;
		ty = "Terima kasih telah menggunakan kartu kredit ABC! Kami memberi anda diskon 25%!";
	}
	else
	{
		total = bersih;
		diskon = 0;
		ty = " ";
	}
	
	pr=transaksi*0.11;
	bl=transaksi*0.05;
	
	cout<<"=============================bill restoran XYZ============================="<<endl;
	cout<<"Transaksi anda= Rp. "<<transaksi<<endl;
	cout<<"Pajak Restoran 11% = Rp."<<pr<<endl;
	cout<<"Biaya layanan 5% = Rp."<<bl<<endl;
	cout<<ty<<"Diskon = Rp."<<diskon<<endl;
	cout<<"Total = Rp."<<total<<endl;
	cout<<"Terima kasih telah makan di restoran XYZ"<<endl;
}
