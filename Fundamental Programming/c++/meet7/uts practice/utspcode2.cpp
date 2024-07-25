//Georgia Sugisandhea_535230080
#include<iostream>
using namespace std;

int main()
{
	int co, cu;
	char word[20];
	void pal(char word[20], int co);
	cout<<"Ada berapa huruf di katamu? ";
	cin>>co;
	cout<<"Masukkan katamu= ";
	for(cu=0; cu<co; cu++)
	{
		cin>>word[cu];
	}
	pal(word, co);
}

void pal(char word[20], int co)
{
	int cu, ch;
	ch=co-1;
	for(cu=0; cu<co; cu++)
	{
		if(word[cu]!=word[ch])
			break;
		
		ch--;
	}
	
	if(word[cu]!=word[ch])
		cout<<"Kata anda bukan palindrome";
	else
		cout<<"Kata anda adalah palindrome";
}