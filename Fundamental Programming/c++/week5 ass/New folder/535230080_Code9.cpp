//Georgia Sugisandhea_535230080_KelasC
#include<iostream>
using namespace std;

int main()
{
	float data[50];
	int n, a, x, f=0;
	
	cout<<"Ketikkan jumlah data: ";
	cin>>n;
	cout<<"Ketikkan data "<<endl;
	for(a=0; a<n; a++)
	{
		cout<<"Data ke "<<a+1<<" : ";
		cin>>data[a];
	}
	cout<<"Ketikkan nilai yang dicari: ";
	cin>>x;
	
	for(a=0; a<n; a++)
	{
		if(data[a]==x)
		{
			cout<<"Nilai "<<x<<" ditemukan di indeks ke "<<a<<endl;
			f=1;
			break;
		}
	}
	
	if(f==0)
	{
		cout<<"Data yang anda cari tidak ada. "<<endl;
	}
	return 0;
}