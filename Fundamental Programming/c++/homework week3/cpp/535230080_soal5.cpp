//535230080_Georgia Sugisandhea
#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main()
{
	string x, nama, y;
	int jumlah, harga, total, all, t;
	x=" ";
	all=0;
	t=0;
	y=", ";
	cout<<"--------------------------SLIP BELANJA--------------------------"<<endl;
	cout<<"Masukkan nama barang= ";
	cin>>nama;
	while(nama != "end" && nama !="END")
	{
		cout<<"Berapa jumlahnya= ";
		cin>>jumlah;
		cout<<"Berapa harganya= ";
		cin>>harga;
		if(jumlah>=10 && jumlah<25)
		{
			harga=harga-(harga*0.05);
			cout<<"Selamat, anda mendapat diskon 5%"<<endl;
		}
		else if(jumlah>=25 && jumlah<50)
		{
			harga=harga-(harga*0,1);
			cout<<"Selamat, anda mendapat diskon 10%"<<endl;
		}
		else if(jumlah>=50 && jumlah<100)
		{
			harga=harga-(harga*0.15);
			cout<<"Selamat, anda mendapat diskon 15%"<<endl;
		}
		else if(jumlah>=100)
		{
			harga=harga-(harga*0.2);
			cout<<"Selamat, anda mendapat diskon 20%"<<endl;
		}
		
		total=jumlah*harga;
		x=x+nama+y;
		all=all+total;
		t=t+jumlah;
		cout<<nama<<"x"<<jumlah<<"-------= Rp."<<total<<endl<<endl;
		cout<<"Masukkan nama barang= (masukkan end jika habis) ";
		cin>>nama;
	}
	cout<<"--------------------------------------------------------------------"<<endl;
	cout<<"--------------------------Grand Total Slip--------------------------"<<endl;
	cout<<"Barang yang dibeli = "<<x<<endl;
	cout<<"Total barang = "<<t<<" buah"<<endl;
	cout<<"Total harga = Rp."<<all<<endl;
	cout<<"--------------------------------------------------------------------";
	
	return 0;
}