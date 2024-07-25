#include<iostream>
using namespace std;

int main()
{
	char y;
	int n, t;
	float x[30], max, min, r;
	void range(float x[30], int n, float &max, float &min);
	cout<<"berapa data yang ada? ";
	cin>>n;
	for(t=0; t<=(n-1); t++)
	{
		cout<<"Masukkan data ";
		cin>>x[t];
	}
	range(x, n, max, min);
	cout<<"Angka maksimum anda adalah "<<max<<endl;
	cout<<"Angka minimum anda adalah "<<min<<endl;
	r=max-min;
	cout<<"Range anda adalah "<<r<<endl;
	
	return 0;
}


void range(float x[30], int n, float &max, float &min)
{
	int y, t;
	max=x[2];
	min=x[1];
	for(y=0; y<=(n-1); y++)
	{
		for(t=0; t<=(n-1); t++)
		{
			if(x[y]<x[t])
			{
				if(x[t]>max)
					max=x[t];
				
				if(x[y]<min)
					min=x[t];
			}
			else if(x[y]>x[t])
			{
				if(x[y]>max)
					max=x[t];
				
				if(x[t]<min)
					min=x[t];
			}
			
		}
	}
}


