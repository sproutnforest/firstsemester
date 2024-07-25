//Georgia Sugisandhea_535230080
#include<iostream>
using namespace std;

int main()
{
	int n[100], i, t;
	void binarysearch(int n[], int t);
	
	cout<<"Ada berapa data kalian? ";
	cin>>t;
	for(i=0; i<t; i++)
	{
	cout<<"Masukkan data ke-"<<i+1<<" ";
	cin>>n[i];
	}
	
	binarysearch(n, t);
}

void binarysearch(int n[], int t)
{
	bool found;
	int j, tengah, kanan, kiri, x, i;
	char val;
	
	cout<<"Apakah data anda urut? (y/t) ";
	cin>>val;
	
	if(val=='t' || val=='t')
	{
		cout<<"Mengurutkan data..."<<endl;
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
	
	cout<<endl<<"Cari data apa? ";
	cin>>x;
	found=false;
	kiri=0;
	kanan=t-1;
	while(not found && kiri<=kanan)
	{
		tengah=(kiri+kanan) / 2;
		
		if(x==n[tengah])
		{
			j=tengah;
			found=true;
		}
		else if(x<n[tengah])
		{
			kanan=tengah-1;
		}
		else
		{
			kiri=tengah+1;
		}
	}
	if(not found)
		cout<<"Data yang anda cari tidak ditemukan";
	else
		cout<<"Data yang ada cari ditemukan di data ke-"<<j+1;
}
