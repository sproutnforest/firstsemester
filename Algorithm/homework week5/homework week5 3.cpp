#include<iostream>
using namespace std;

int main()
{
	char kata[10];
	int n, t;
	void pal(char kata[10], int n, int t);
	cout<<"Berapa jumlah huruf dalam kata kalian ";
	cin>>t;
	cout<<"Masukkan kata kalian ";
	for(n=0; n<t; n++)
	{
	cin>>kata[n];
	}
	
	pal(kata, n, t);
	
}

void pal(char kata[10], int n, int t)
{
	int x;
	for(x=0; x<t; x++)
	{
	    if(kata[x]!=kata[n-1])
			break;
	    n--;
}
	
	if(kata[x]!=kata[n-1])
	    cout<<"Kata anda bukan Palindrome";
	else 
	    cout<<"Kata anda adalah Palindrome";
	
}
