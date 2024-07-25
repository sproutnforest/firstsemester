//Georgia Sugisandhea_535230080
#include<iostream>
using namespace std;

int main()
{
	int n[100], t, i;
	void insertionsort(int n[], int t);
	
	cout<<"Ada berapa data kalian? ";
	cin>>t;
	for(i=0; i<t; i++)
	{
	cout<<"Masukkan data ke-"<<i+1<<" ";
	cin>>n[i];
	}
	
	insertionsort(n, t);
}

void insertionsort(int n[], int t)
{
	int x, j, i;
	for(i=1; i<t; i++)
	{
		x=n[i];
		j=i-1;
		while (x<n[j])
		{
			n[j+1]=n[j];
			j=j-1;
		}
	n[j+1]=x;
	}
	
	cout<<"Hasil= ";
	for(i=0; i<t; i++)
	{
		cout<<n[i]<<" ";
	}
}