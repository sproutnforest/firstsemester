//535230080_Georgia Sugisandhea_kelas C
#include<iostream>
#include<string>
using namespace std;

void cetak()
{
	int npm;
	string nama;
	
	cout<<"Ketikkan Nama: ";
	cin>>nama;
	
	cout<<"Ketikkan NPM: ";
	cin>>npm;
	
	cout<<"=================================="<<endl;
	cout<<"Nama : "<<nama<<endl;
	cout<<"NPM : "<<npm<<endl;
	cout<<"=================================="<<endl;
}

int main()
{
	cetak();
	cetak();
	
	return 0;
}