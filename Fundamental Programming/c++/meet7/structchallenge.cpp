#include<iostream>
#include<string>
using namespace std;

struct nama
{
	char depan[15];
	char tengah[15];
	char keluarga[15];
};

struct mahasiswa
{
	nama namamhs;
	string npm;
	float uts;
	float uas;
	float praktikum;
	float tugas;
	float avr;
	char mutu;
};

int main()
{
	int jum, ec;
	float avr;
	mahasiswa mhs[60]; //declare struct as array
	
	cout<<"Jumlah mahasiswa= ";
	cin>>jum;
	cout<<"Input data mahasiswa"<<endl;
	
	for(ec=0; ec<jum; ec++)
	{
		cout<<ec+1<<". "<<endl;
		cout<<"Nama depan= ";
		cin>>mhs[ec].namamhs.depan;
		cout<<"Nama tengah= ";
		cin>>mhs[ec].namamhs.tengah;
		cout<<"Nama keluarga= ";
		cin>>mhs[ec].namamhs.keluarga;
		cout<<"NPM= ";
		cin>>mhs[ec].npm;
		cout<<"Nilai uts= ";
		cin>>mhs[ec].uts;
		cout<<"Nilai uas= ";
		cin>>mhs[ec].uas;
		cout<<"Nilai praktikum= ";
		cin>>mhs[ec].praktikum;
		cout<<"Nilai tugas= ";
		cin>>mhs[ec].tugas;
		
		avr=(mhs[ec].uts+mhs[ec].uas+mhs[ec].praktikum+mhs[ec].tugas)/4;
		mhs[ec].avr=avr;
		if(avr>=80)
			mhs[ec].mutu='A';
		else if(avr>=70)
			mhs[ec].mutu='B';
		else if(avr>=60)
			mhs[ec].mutu='C';
		else if(avr>=50)
			mhs[ec].mutu='D';
		else
		
			mhs[ec].mutu='E';
	}
	
	cout<<endl;
	cout<<"==============================================Rapor=============================================="<<endl;
	for(ec=0; ec<jum; ec++)
	{
		cout<<ec+1<<". "<<endl;
		cout<<"Nama= "<<mhs[ec].namamhs.depan<<" "<<mhs[ec].namamhs.tengah<<" "<<mhs[ec].namamhs.keluarga<<endl;
		cout<<"Nilai UTS= "<<mhs[ec].uts<<endl;
		cout<<"Nilai UAS= "<<mhs[ec].uas<<endl;
		cout<<"Nilai praktikum= "<<mhs[ec].praktikum<<endl;
		cout<<"Nilai tugas= "<<mhs[ec].tugas<<endl;
		cout<<"Nilai= "<<mhs[ec].avr<<endl;
		cout<<"Mutu= "<<mhs[ec].mutu<<endl<<endl;
	}

}