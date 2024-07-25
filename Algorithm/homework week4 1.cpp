#include <iostream>
#include <string>
#include <stdint.h>

using namespace std;
float n;
int paint(float n)
{
	float liter;
	
	liter=(n*15/100);
	
	return liter;
}
int upah(float n)
{
	float biaya;
	
	biaya=(n*8/100*15000);
	
	return biaya;
}
int main()
{
	float cat, x, jumlah, n, biaya, harga, t;
	cout<<"Masukkan harga cat per liter";
	cin>>cat;
	cout<<"Harga minimal adalah 100m2, 15 liter cat, dan 15000 per jam untuk 8 jam"<<endl;
	cout<<"Berapa banyak ruang yang dicat? ";
	cin>>n;
	if(n<1)
	cout<<"Maaf, minimal ruangan adalah 1";
	else
	{
		cout<<"Berapa total luas dinding? ";
		cin>>x;	
		if(x<100)
			cout<<"Anda akan dikenakan biaya minimal";
		
		biaya=upah(x);
		jumlah=paint(x);
		harga=jumlah*cat;
		t=harga+biaya;
		cout<<"Upah tukang cat = "<<biaya<<endl;
		cout<<"Jumlah liter cat yang dibutuhkan = "<<jumlah<<endl;
		cout<<"Harga cat total = "<<harga<,endl;
		cout<<"Total tagihan = "<<t<<endl;
	}
}