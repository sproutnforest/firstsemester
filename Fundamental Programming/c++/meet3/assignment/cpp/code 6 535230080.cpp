#include<iostream>
using namespace std;

int main()
{
	int n, t;
	
	cout<<"Masukkan angka yang ingin di faktorial= ";
	cin>>n;
	t=1;
	cout<<"Faktorial dari "<<n;
	for(n=n; n>=1; n--)
	{
		t=t*n;
	}
	cout<<" adalah "<<t;
	return 0;
}