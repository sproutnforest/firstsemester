//Georgia Sugisandhea - Kelas C - 535230080

#include <iostream>
#include <string>
using namespace std;

int main ()
{
	int norek;
	float saldo, transaksi;
	char kode;
	
	cout<<"Masukkan norek anda= ";
	cin>>norek;
	
	cout<<"Masukkan jumlah saldo anda= ";
	cin>>saldo;
	
	cout<<"Masukkan kode transaksi(A/S/P/T)= ";
	cin>>kode;
	
	switch(kode)
	{
		case'A': 
		{
			cout<<"Masukkan jumlah uang yang ingin anda tarik= ";
			cin>>transaksi;
			saldo=saldo-transaksi;
			cout<<"Ambil uang anda"<<endl;
			cout<<"Sisa saldo anda "<<saldo<<endl;
			break;
		}
		case'S':
		{
			cout<<"Masukkan jumlah uang yang ingin anda setor= ";
			cin>>transaksi;
			saldo=saldo+transaksi;
			cout<<"Masukkan uang anda"<<endl;
			cout<<"Jumlah saldo anda "<<saldo<<endl;
			break;
		}
		case'P':
		{
			cout<<"Saldo anda sekarang "<<saldo<<endl;
			break;
		}
		case'T':
		{
			cout<<"Saldo penutupan tabungan anda adalah "<<saldo<<endl;
			break;
		}
		default:
		{
			cout<<"Maaf kode yang anda masukkan tidak ditemukan"<<endl;
			break;
		}
			
	}
}