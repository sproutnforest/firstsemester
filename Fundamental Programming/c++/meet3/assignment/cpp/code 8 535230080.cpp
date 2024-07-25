#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n, banyak, prak;
	float uts, uas, nilai, praktikum, y, x;
	string nama;
	cout<<"Berapa banyak mahasiswanya? ";
	cin>>banyak;
	
	for(n=1; n<=banyak; n++)
	{
		cout<<"Siapa nama mahasiswanya: ";
		cin>>nama;
		cout<<"Berapa nilai praktikumnya: "<<endl;
		y=0;
		for(prak=1; prak<=4; prak++)
		{
			cout<<"Praktikum "<<prak<<" :";
			cin>>x;
			y=y+x;
		}
		praktikum=y/4;
		cout<<"Berapa nilai utsnya: ";
		cin>>uts;
		cout<<"Berapa nilai uasnya: ";
		cin>>uas;
		nilai=0.2*prak+0.3*uts+0.5*uas;
		
		cout<<endl<<"===DATA MAHASISWA==="<<endl<<endl;
		cout<<"Nama mahasiswa = "<<nama<<endl;
		cout<<"Nilai praktikum = "<<praktikum<<endl;
		cout<<"Nilai UTS = "<<uts<<endl;
		cout<<"Nilai UAS = "<<uas<<endl;
		cout<<"Nilai akhir = "<<nilai<<endl<<endl;
		cout<<"====================================="<<endl<<endl;
	}
}