//Georgia Sugisandhea_535230080
#include<iostream>
using namespace std;

int main()
{
	char kata[15];
	int n, i;
	void pal(char kata[], int n);
	
	cout<<"Berapa jumlah huruf dalam kata kalian? ";
	cin>>n;
	cout<<"Masukkan kata kalian = ";
	for(i=0; i<n; i++)
	{
		cin>>kata[i];
	}
	
	pal(kata, n);
	
}

void pal(char kata[], int n)
{
	int i, y;
	y=1;
	for(i=0; i<n; i++)
	{
		if(kata[i]!=kata[n-1])
		{
			y=0;
			break;
		}
		n--;
	}
	if(kata[i]!=kata[n-1])
		cout<<"Kata anda bukan palindrome";
	else
		cout<<"Kata anda adalah palindrome";
}