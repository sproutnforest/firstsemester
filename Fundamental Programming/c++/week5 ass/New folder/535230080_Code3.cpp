//Georgia Sugisandhea_535230080_Kelas C
#include<iostream>
using namespace std;

int main()
{
	float temp[10], rata=0;
	int n, i;
	
	cout<<"Berapa hari yang akan anda masukkan? ";
	cin>>n;
	
	for(i=0; i<n; i++)
	{
		cout<<"Suhu hari ke-"<<(i+1)<<" = ";
		cin>>temp[i]; 
		rata+=temp[i];
	}
	rata=rata/n;
	
	cout<<"Rata rata suhu "<<n<<" hari ini adalah "<<rata;
	
	return 0;
}