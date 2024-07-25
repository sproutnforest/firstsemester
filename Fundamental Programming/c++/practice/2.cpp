#include<iostream>
using namespace std;

int main()
{
	string x;
	int n;
	void duplicate(string x, int n);
	
	cout<<"Masukkan kata yang ingin kamu ulang ";
	cin>>x;
	cout<<"Berapa kali? ";
	cin>>n;
	duplicate(x, n);
}

void duplicate(string x, int n)
{
	int i;
	
	for(i=1; i<=n; i++)
		cout<<x;
}