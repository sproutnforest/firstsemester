//Georgia Sugisandhea_535230080
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

float ptkp(int upah, string nikah, int tang, float jam)
{
	float kerja, ptkp;
	
	if(jam>40)
		kerja=(upah*40)+(upah*1.5*(jam-40));
	else
		kerja=upah*jam;	
		
	
	ptkp=kerja-(tang*300000);
	
	if(nikah=="y" || nikah=="Y")
		ptkp=ptkp-350000;
	else
		ptkp=ptkp-400000;
	
	return ptkp;
}
float pkp(int n)
{
	float pajak;
	if(n<=1000000)
		pajak=n*0;
	else if(n<=2500000)
		pajak=(1000000*0)+((n-1000000)*0.05);
	else if(n<=5000000)
		pajak=(1500000*0.05)+((n-2500000)*0.1);
	else if(n<=10000000)
		pajak=(1500000*0.05)+(2500000*0.1)+((n-5000000)*0.15);
	else
		pajak=(1500000*0.05)+(2500000*0.1)+(5000000*0.15)+((n-10000000)*0.2);
	
	return pajak;
}
int main()
{
	int upah, tang, nopajak, pajak;
	float jam;
	string nama, nikah;
	cout<<"Upah per jam= ";
	cin>>upah;
	cout<<"Nama pegawai= ";
	cin>>nama;
	cout<<"Status pernikahan (y/t)= ";
	cin>>nikah;
	cout<<"Banyaknya tanggungan= ";
	cin>>tang;
	cout<<"Jumlah jam kerja seminggu= ";
	cin>>jam;
	
	nopajak=ptkp(upah, nikah, tang, jam);
	nopajak=nopajak*52;
	pajak=pkp(nopajak);
	if(pajak<0)
		pajak=0;
	cout<<"=================================SLIP TAGIHAN PAJAK================================="<<endl;
	cout<<"Total penghasilan anda yang dikenakan pajak per tahun adalah= "<<nopajak<<endl;
	cout<<"Total pajak per tahun anda adalah= "<<pajak<<endl;
	cout<<"===================================================================================="<<endl;
	
	
	return 0;
}