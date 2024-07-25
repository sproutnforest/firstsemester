#include<iostream>
using namespace std;

int main()
{
	int no, roun[15], ul, max;
	cout<<"Ada berapa nomor kamu? ";
	cin>>no;
	cout<<"Masukkan data kamu";
	for(ul=0; ul<no; ul++)
	{
		cout<<ul+1<<". ";
		cin>>roun[ul];
	}
	
	max=roun[0];
	for(ul=0; ul<no; ul++)
	{
		if(roun[ul]>max)
			max=roun[ul];
	}
	
	cout<<"Max= "<<max;
}