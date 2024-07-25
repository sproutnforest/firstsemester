#include<iostream>
#include<string>
using namespace std;

int main()
{
	int manpipel, adpipel[20][4], liat[20], gea, sugi=1;
	string pipel[20][4];
	cout<<"Berapa banyak tamu? ";
	cin>>manpipel;
	
	for(gea=0; gea<manpipel; gea++)
	{
		cout<<"Masukkan nama tamu: ";
		cin>>pipel[gea][1];
		cout<<"Masukkan asal tamu: ";
		cin>>pipel[gea][2];
		cout<<"Masukkan jumlah orang: ";
		cin>>adpipel[gea][1];
		cout<<"Masukkan jumlah angpao: ";
		cin>>adpipel[gea][2];
		
		liat[gea]=adpipel[gea][1]*50000;
		if(liat[gea]>adpipel[gea][2])
			liat[gea]=0;
		else
			liat[gea]=1;
		
		cout<<endl;
	}
	
	cout<<"List tamu RESEpsi angpao kecil: "<<endl;
	
	for(gea=0; gea<manpipel; gea++)
	{
		if(liat[gea]==0)
		{
			cout<<sugi<<". "<<pipel[gea][1]<<" dari "<<pipel[gea][2]<<", bawa orang "<<adpipel[gea][1]<<" angpaonya Rp "<<adpipel[gea][2]<<endl;
			sugi++;
		}
	}
	
}