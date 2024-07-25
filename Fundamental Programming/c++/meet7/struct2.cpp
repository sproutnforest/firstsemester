#include<iostream>
using namespace std;

struct nama
{
	char nama_depan[12];
	char nama_tengah[12];
	char nama_keluarga[15];
};

struct mahasiswa
{
	nama nama_mhs;
	char npm[10];
	float nilai;
};

int main()
{
	mahasiswa m;
	cout<<"Ketikkan data mahassiswa"<<endl;
	cout<<"Nama depan: ";
	cin>>m.nama_mhs.nama_depan;
	cout<<"Nama tengah: ";
	cin>>m.nama_mhs.nama_tengah;
	cout<<"Nama keluarga: ";
	cin>>m.nama_mhs.nama_keluarga;
	cout<<"NPM: ";
	cin>>m.npm;
	cout<<"Nilai: ";
	cin>>m.nilai;
	
	cout<<"\n\n=================================== Data Mahasiwa ===================================\n";
	cout<<"Nama: "<<m.nama_mhs.nama_depan<<" "<<m.nama_mhs.nama_tengah<<" "<<m.nama_mhs.nama_keluarga<<endl;
	cout<<"NPM: "<<m.npm<<endl;
	cout<<"Nilai: "<<m.nilai<<endl;
	
	return 0;
	
}










