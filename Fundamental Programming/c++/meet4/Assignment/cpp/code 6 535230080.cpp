//535230080_Georgia Sugisandhea_kelas C
#include<iostream>
using namespace std;

float average()
{
	float n, rata, sum=0, angka;
	int i;
	
	cout<<"Ketikkan banyaknya angka: ";
	cin>>n;
	
	for(i=1; i<=n; i++)
	{
		cout<<"Ketikkan angka ke "<<i<<" : ";
		cin>>angka;
		sum=sum+angka;
	}
	rata = sum/n;
	return rata;
}

int main()
{
	float rata;
	rata = average();
	cout<<"Rata-rata = "<<rata<<endl;
	
	return 0;
}