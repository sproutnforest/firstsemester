#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n, t;
	cout<<"Masukkan angka yang ingin di faktorial= ";
	cin>>n;
	
	t=n;
	while(n>1)
	{
		n--;
		t=t*n;
	}
	
	cout<<"Hasil angka faktorial anda adalah "<<t;
	return 0;
}