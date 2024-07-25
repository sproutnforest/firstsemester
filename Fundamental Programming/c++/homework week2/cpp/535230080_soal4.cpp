#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
	int anggota, bulan, total; 
	string jenis;
	
	cout<<"Selamat datang di megagram! Pilih keanggotaan kamu dengan memilih angka dibawah ini: "<<endl;
	cout<<"1. Dewasa = Rp. 200.000/bulan"<<endl;
	cout<<"2. Anak anak = Rp. 150.000/bulan"<<endl;
	cout<<"3. 1 Dewasa & 1 Anak = Rp. 300.000/bulan"<<endl;
	cout<<"4. Keluarga = Rp. 500.000/bulan"<<endl;
	cout<<"Masukkan keanggotaan yang anda inginkan (1/2/3/4): ";
	cin>>anggota;
	cout<<"Berapa bulan kamu ingin membayar? ";
	cin>>bulan;
	if(bulan==12)
	{
		bulan = 11;
		cout<<"Selamat! Karena anda membeli 1 tahun langsung anda mendapat diskon 1 bulan!"<<endl;
	}

	
	switch(anggota)
	{
		case 1:
			{
				jenis ="Dewasa";
				total = 200000*bulan;
				cout<<"Selamat bergabung menjadi anggota!"<<endl;
				cout<<"Jenis keanggotaan anda adalah "<<jenis<<" dengan pembayaran "<<bulan<<" bulan, dengan total Rp."<<total<<endl;
				break;
			}
		case 2:
			{
				jenis ="Anak-anak";
				total = 150000*bulan;
				cout<<"Selamat bergabung menjadi anggota!"<<endl;
				cout<<"Jenis keanggotaan anda adalah "<<jenis<<" dengan pembayaran "<<bulan<<" bulan, dengan total Rp."<<total<<endl;
				break;
			}
		case 3:
			{
				jenis ="1 Dewasa & 1 Anak";
				total = 300000*bulan;
				cout<<"Selamat bergabung menjadi anggota!"<<endl;
				cout<<"Jenis keanggotaan anda adalah "<<jenis<<" dengan pembayaran "<<bulan<<" bulan, dengan total Rp."<<total<<endl;
				break;
			}
		case 4:
			{
				jenis ="Keluarga";
				total = 500000*bulan;
				cout<<"Selamat bergabung menjadi anggota!"<<endl;
				cout<<"Jenis keanggotaan anda adalah "<<jenis<<" dengan pembayaran "<<bulan<<" bulan, dengan total Rp."<<total<<endl;
				break;
			}
		default:
			{
				cout<<"Mohon maaf, kode yang anda masukkan tidak ditemukan"<<endl;
			}
	}
	
	return 0;
}