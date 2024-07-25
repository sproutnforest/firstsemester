#include<iostream>
#include<string>
using namespace std;

int main()
{
	int ind;
	string has;
	
	cout<<"Masukkan indeks polusi";
	cin>>ind;
	
	if(ind<35)
	{
		has="Nyaman";
	}
	else if(ind<=60)
	{
		has="Tidak Nyaman";
	}
	else
	{
		has="Berbahaya";
	}
	
	cout<<"Polusi di wilayah anda bersifat "<<has;
}

//4 minutes