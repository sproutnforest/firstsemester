#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main()
{
	string nama;
	int jumlah;
	float total, harga, cash, bayar;
	
	cout<<"Selamat datang! Masukkan nama barang yang anda beli: ";
	cin>>nama;
	cout<<"Masukkan jumlah barang yang anda beli: ";
	cin>>jumlah;
	cout<<"Masukkan harga barang satuan yang anda beli: ";
	cin>>harga;
	total=harga*jumlah;
	
	if(jumlah>=10 && jumlah<25)
		total=total-(total*0.05);
	else if(jumlah>=25 && jumlah<50)
		total=total-(total*0.1);
	else if(jumlah>=50 && jumlah<100)
		total=total-(total*0.15);
	else if(jumlah>=100)
		total=total-(total*0.2);
	else
		total=total;
	
	cout<<"Total transaksi "<<nama<<" anda adalah Rp. "<<total<<endl;
	cout<<"Masukkan uang yang diberikan: Rp.";
	cin>>cash;
	bayar=cash-total;
	
	if(bayar>0)
		cout<<"Kembalian anda adalah Rp."<<bayar<<". Terima kasih!";
	else if(bayar<0)
	{
		bayar=-bayar;
		cout<<"Bayaran anda kurang Rp."<<bayar<<". Terima kasih!";
	}
	else
		cout<<"Kembalian anda pas. Terima kasih!"<<endl;
	
	return 0;
}