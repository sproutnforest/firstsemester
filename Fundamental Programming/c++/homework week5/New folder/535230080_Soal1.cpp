//Georgia Sugisandhea_535230080
#include<iostream>
using namespace std;

int main()
{
	int data[100], n, i;
	void exchangesort(int data[], int n);
	
	cout<<"Ada berapa data anda? ";
	cin>>n;
	
	for(i=0; i<n; i++)
	{
		cout<<"Masukkan data ke-"<<i+1<<" ";
		cin>>data[i];
	}
	
	exchangesort(data, n);
	
	return 0;
}


void exchangesort(int data[], int n)
{
	int i, j, temp, x;
	
	for(i=1; i<=n+1; i++)
	{
		for(j=n; j>0; j--)
		{
			if(data[j-1]>data[j])
			{
				temp=data[j];
				data[j]=data[j-1];
				data[j-1]=temp;
			}
		}
	}
	cout<<"Hasil urutan angka anda adalah = ";
	for(i=0; i<n; i++)
	{
		cout<<data[i]<<" ";
	}
}
