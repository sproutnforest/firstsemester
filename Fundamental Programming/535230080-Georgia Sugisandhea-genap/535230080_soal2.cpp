#include<iostream>
#include<string>
using namespace std;

int main()
{
	int ung[10], ada, gea, dadda, baba, sugi;
	char apa[25];
	string earl;
	
	cout<<"Masukkan kalimat kalian= ";
	getline(cin, earl);
	ada=earl.length();
	
	baba=earl.size();
	
	dadda=0;
	ung[dadda]=0;
	for(gea=0; gea<baba; gea++)
	{
		apa[gea]=earl[gea];
	}
	
	dadda+=2;
	baba--;
	for(gea=baba; gea>=0; gea--)
	{
			cout<<apa[gea];
	}
}