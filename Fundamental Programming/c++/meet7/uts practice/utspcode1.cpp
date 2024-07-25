//Georgia Sugisandhea_535230080
#include<iostream>
using namespace std;

int main()
{
	int jum, co, cu;
	cout<<"Masukkan jumlah baris: ";
	cin>>jum;
	
	for(co=1; co<=jum; co++)
	{
		for(cu=1; cu<=co; cu++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	for(co=jum; co>0; co--)
	{
		for(cu=co; cu>0; cu--)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}