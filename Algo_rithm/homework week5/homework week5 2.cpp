#include<iostream>
using namespace std;

int main()
{
	void jak();
	jak();
}

void jak()
{
	int n, c, k, t, z, x, y;
	int code[25];
	int kode[25];
	int has[25];
	cout<<"Ada berapa jenis permen di gudang Jakarta? ";
	cin>>n;
	
	for(t=0; t<n; t++)
	{
		cout<<"Masukkan kode permen (111-999) ";
		cin>>code[t];
	}

	cout<<"Ada berapa jenis permen di gudang Bandung? ";
	cin>>x;
	
	for(t=0; t<x; t++)
	{
		cout<<"Masukkan kode permen (111-999) ";
		cin>>kode[t];
	}

	z=0;
	
	for(c=0; c<n; c++)
	{
		for(k=0; k<x; k++)
		{
		    if(code[c]==kode[k])
			{
			has[z]=code[c];
			z++;
			}
			
		}
	}
	cout<<"Permen yang ada di ke2 gudang ada "<<z<<" permen"<<endl;
	cout<<"Permen-permen itu adalah= "<<endl;
	for(y=0; y<z; y++)
	{
		cout<<y+1<<". "<<has[y]<<endl;
	}
}
	
