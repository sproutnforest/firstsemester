//Georgia Sugisandhea - Kelas C - 535230080

#include <iostream>
#include <math.h>
#include <string>
using namespace std;
int main()
{
	string nama;
	int absen, lembur, bonus;
	
	cout<<"Masukkan nama anda: ";
	cin>>nama;
	cout<<"Berapa jumlah absen anda? ";
	cin>>absen;
	cout<<"Berapa jumlah lembur anda? ";
	cin>>lembur;
	
	if(lembur-(2*absen/3)<=0)
	bonus = 0;
	else
	bonus = 100000;
	
	cout<<"Halo! "<<nama<<" bonus kamu adalah "<<bonus<<endl;
	
	return 0;
}