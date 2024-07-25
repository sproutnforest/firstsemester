#include<iostream>
#include<string>
using namespace std;

int main()
{
	int choice, month, price, counter;
	string member;
	
	counter=0;
	
	cout<<"MENU"<<endl;
	cout<<"1. Dewasa ---- 200k/bulan"<<endl;
	cout<<"2. Anak-anak ---- 150k/bulan"<<endl;
	cout<<"3. 1 dewasa 1 anak ---- 300k/bulan"<<endl;
	cout<<"4. Keluarga ---- 500k/bulan"<<endl;
	cout<<"Silahkan masukkan angka menu yang anda pilih";
	cin>>choice;
	cout<<"Berapa bulan iuran yang ingin anda bayar?";
	cin>>month;
	if(month>=12)
	{
		month-=1;
		counter=1;
	}
				
	
	switch(choice)
	{
		case 1:
			{
				price=200000*month;
				member="Dewasa";
				break;
			}
		case 2:
			{
				price=150000*month;
				member="Anak-anak";
				break;
			}
		case 3:
			{
				price=300000*month;
				member="1 Dewasa & 1 Anak";
				break;
			}
		case 4:
			{
				price=500000*month;
				member="Keluarga";
				break;
			}
		default:
			{
				cout<<"Maaf kode yang anda masukkan tidak ditemukan"<<endl;
				price=0;
				member="Tidak Ditemukan";
				break;
			}
	}
	
	if(counter==1)
		month++;
		
	cout<<"Selamat datang menjadi anggota! Anda mengambil membership "<<member<<" dengan keanggotaan "<<month<<endl;
	cout<<"Tagihan = Rp."<<price<<endl;
}
//13.27 minutes