#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n, x;
	string word;
	char fin[15];
	cout<<"Masukkan string yang mau anda reverse ";
	cin>>word;
	
	n=word.size();
	strcpy(fin, word.c_str());
	
	for(x=n; x>=0; x--)
	{
		cout<<fin[x];
	}
}