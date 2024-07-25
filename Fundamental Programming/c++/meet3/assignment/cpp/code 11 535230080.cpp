#include<iostream>
#include<string>
using namespace std;

int main()
{
	float uts, prak, uas, nilai;
	string nama; 
	cout<<"Siapa nama mahasiswanya? ";
	cin>>nama;
	do
	{
		cout<<"Berapa nilai praktikumnya? ";
		cin>>prak;
	
		cout<<"Berapa nilai utsnya? ";
		cin>>uts;
	
		cout<<"Berapa nilai uasnya? ";
		cin>>uas;
		
		nilai=0.2*prak+0.3*uts+0.5*uas;
		
		cout<<endl<<"===DATA MAHASISWA==="<<endl<<endl;
		cout<<"Nama mahasiswa = "<<nama<<endl;
		cout<<"Nilai praktikum = "<<prak<<endl;
		cout<<"Nilai UTS = "<<uts<<endl;
		cout<<"Nilai UAS = "<<uas<<endl;
		cout<<"Nilai akhir = "<<nilai<<endl<<endl;
		cout<<"====================================="<<endl<<endl;
		
		cout<<"Siapa nama mahasiswa selanjutnya? ";
		cin>>nama;
	
	}
	while(nama!= "END" && nama != "end");
	
	return 0;
}