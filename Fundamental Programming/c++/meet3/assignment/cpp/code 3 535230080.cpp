#include <iostream>
#include <string>
using namespace std;

int main()
{
	int jumlah, n;
	float prak, uts, uas, nilai;
	string nama;
	
	cout<<"Berapa jumlah mahasiswanya? ";
	cin>>jumlah;
	cout<<endl;
	
	n=1;
	while(n<=jumlah)
	{
		cout<<"Siapa nama mahasiswanya? ";
		cin>>nama;
		
		cout<<"Berapa nilai praktikumnya? ";
		cin>>prak;
		
		cout<<"Berapa nilai UTS nya? ";
		cin>>uts;
		
		cout<<"Berapa nilai UAS nya? ";
		cin>>uas;
		
		nilai=0.2*prak + 0.3*uts + 0.5*uas;
		
		cout<<endl<<"===DATA MAHASISWA"<<n<<"==="<<endl<<endl;
		cout<<"Nama mahasiswa = "<<nama<<endl;
		cout<<"Nilai praktikum = "<<prak<<endl;
		cout<<"Nilai UTS = "<<uts<<endl;
		cout<<"Nilai UAS = "<<uas<<endl;
		cout<<"Nilai akhir = "<<nilai<<endl<<endl;
		cout<<"====================================="<<endl<<endl;
		n++;
	}
}