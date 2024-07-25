#include<iostream>
#include<string>
using namespace std;

int main()
{
	int count, num, out, loop;
	cout<<"Masukkan jumlah bilangan ";
	cin>>count;
	
	for(loop=1; loop<=count; loop++)
	{
		cout<<"Masukkan angka = ";
		cin>>num;
		
		out=num%2;
		if(out==1)
		{
			cout<<"Bilangan anda adalah ganjil"<<endl;
		}
		else
		{
			cout<<"Bilangan anda adalah genap"<<endl;
		}
	}
}
//2.23 minutes