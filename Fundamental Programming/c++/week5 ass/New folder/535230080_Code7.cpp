//Georgia Sugisandhea_535230080_KelasC
#include<iostream>
using namespace std;

int main()
{
	float data[500], max=0, min, avg, sum=0;
	int n, a;
	
	cout<<"Jumlah angka = ";
	cin>>n;
	
	cout<<"Silahkan masukkan data "<<endl;
	for(a=0; a<n; a++)
	{
		cout<<"Data ke "<<a+1<<" : ";
		cin>>data[a];
		sum = sum + data[a];
	}
	
	for(a=0; a<n; a++) //for max
	{
		if(max<data[a])
		{
			max=data[a];
		}
	}
	
	min=data[n-1];
	for(a=0; a<n; a++)
	{
		if(min>data[a])
		{
			min=data[a];
		}
	}
	avg=sum/n;
	
	cout<<"Nilai rata-rata= "<<avg<<endl;
	cout<<"Nilai maksimum= "<<max<<endl;
	cout<<"Nilai minimum= "<<min<<endl;
	
	return 0;
}