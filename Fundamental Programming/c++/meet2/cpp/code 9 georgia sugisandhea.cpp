//Georgia Sugisandhea - Kelas C - 535230080

#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main()
{
	string nama,sarjana;
	int tahun;
	
	cout<<"Siapa nama anda? ";
	cin>>nama;
	cout<<"Apakah anda sarjana? (Y/T) ";
	cin>>sarjana;
	cout<<"Berapa lama anda bekerja? (tahun) ";
	cin>>tahun;
	
	if(sarjana=="Y" && tahun>=2)
	cout<<"Selamat! "<<nama<<", pengajuan kredit anda berhasil!";
	else if(sarjana=="T" && tahun >=4)
	cout<<"Selamat! "<<nama<<", pengajuan kredit anda berhasil!";
	else
	cout<<"Maaf! "<<nama<<", pengajuan kredit anda gagal";
	
	return 0;
	
	
}