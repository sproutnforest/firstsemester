#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main()
{
	int jenis;
	float alas, tinggi, s1, s2, luas, keliling;
	cout<<"1. Segitiga"<<endl;
	cout<<"2. Persegi Panjang"<<endl;
	cout<<"3. Bujur Sangkar/Persegi"<<endl;
	cout<<"4. Lingkaran"<<endl;
	cout<<"5. Jajaran Genjang"<<endl;
	cout<<"Bentuk persegi panjang mana yang ingin anda hitung? (1/2/3/4/5): ";
	cin>>jenis;
	
	switch(jenis)
	{
		case 1:
			{
				cout<<"Masukkan alas: ";
				cin>>alas;
				cout<<"Masukkan tinggi: ";
				cin>>tinggi;
				cout<<"Masukkan sisi kedua (assuming sisi pertama adalah alas): ";
				cin>>s1;
				cout<<"Masukkan sisi ketiga: ";
				cin>>s2;
				luas=0.5*alas*tinggi;
				keliling=alas+s1+s2;
				cout<<"Segitiga ini memiliki luas "<<luas<<" satuan. Dan keliling "<<keliling<<" satuan."<<endl;
				break;
			}
		case 2:
			{
				cout<<"Masukkan panjang: ";
				cin>>alas;
				cout<<"Masukkan lebar: ";
				cin>>tinggi;
				luas=alas*tinggi;
				keliling=(2*alas)+(2*tinggi);
				cout<<"Persegi panjang ini ini memiliki luas "<<luas<<" satuan. Dan keliling "<<keliling<<" satuan."<<endl;
				break;
			}
		case 3:
			{
				cout<<"Masukkan panjang sisi: ";
				cin>>alas;
				luas=alas*alas;
				keliling=4*alas;
				cout<<"Bujur sangkar ini memiliki luas "<<luas<<" satuan. Dan keliling "<<keliling<<" satuan."<<endl;
				break;
			}
		case 4:
			{
				cout<<"Masukkan panjang jari jari: ";
				cin>>alas;
				luas=3.1416*alas*alas;
				keliling=2*3.1416*alas;
				cout<<"Lingkaran ini memiliki luas "<<luas<<" satuan. Dan keliling "<<keliling<<" satuan."<<endl;
				break;
			}
		case 5:
			{
				cout<<"Masukkan alas: ";
				cin>>alas;
				cout<<"Masukkan tinggi: ";
				cin>>tinggi;
				cout<<"Masukkan sisi miring: ";
				cin>>s1;
				luas=alas*tinggi;
				keliling=2*(alas+s1);
				cout<<"Jajaran genjang ini memiliki luas "<<luas<<" satuan. Dan keliling "<<keliling<<" satuan."<<endl;
				break;
			}
		default:
			{
				cout<<"Maaf kode yang anda masukkan tidak ditemukan";
			}
	}
	return 0;
}