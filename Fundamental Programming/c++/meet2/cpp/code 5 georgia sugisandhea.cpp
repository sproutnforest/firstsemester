//Georgia Sugisandhea - Kelas C - 535230080

#include <iostream>
#include <math.h>
#include <string>
using namespace std;
int main ()
{
	string nama;
	int lembur, absen, bonus;
	
	cout<<"Masukkan nama anda ";
	cin>>nama;
	cout<<"Berapa  jumlah lembur anda? ";
	cin>>lembur;
	cout<<"Berapa jumlah absen anda? ";
	cin>>absen;
	
	if(lembur - (2*absen/3)<=0)
	bonus = 0;
	else
	{
		if(lembur - (2*absen/3)<=10.0)
		bonus = 100000;
		else
		{
			if(lembur - (2*absen/3)<=20.0)
			bonus = 200000;
			else
			{
				if(lembur - (2*absen/3)<=30.0)
				bonus = 300000;
				else
				{
					if(lembur - (2*absen/3)<=40.0)
					bonus = 400000;
					else
					bonus = 500000;
				}
			}
		}
	}
	
	cout<<"Bonus tahunan bagi "<<nama<<" adalah Rp."<<bonus<<endl;
}