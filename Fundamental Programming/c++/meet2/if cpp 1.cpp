#include <iostream>
#include <math.h>
#include <string>
using namespace std;
int main (){
	float rata; //important, variable declaration
	string nama;
	cout<<"Masukkan nama anda: ";
	cin>>nama;
	
	cout<<"Masukkan rata rata nilai anda: ";
	cin>>rata;
	
	if(rata >= 60)
	{
		cout<<"Halo! " <<nama<<endl;
		cout<<"Nilai anda adalah " <<rata<<endl;
		cout<<"Anda lulus! Selamat!"<<endl;
	}
	else
	{
		cout<<"Halo!" <<nama<<endl;
		cout<<"Nilai anda adalah " <<rata<<endl;
		cout<<"Maaf anda tidak lulus"<<endl;
		
	}
	return 0; 
	
}

