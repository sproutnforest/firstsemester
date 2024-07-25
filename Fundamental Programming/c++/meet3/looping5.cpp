#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int bawah, atas, n;
	
	cout<<"Masukkan batas bawah = ";
	cin>>bawah;
	cout<<"Masukkan batas atas = ";
	cin>>atas;
	
	if(atas<bawah)
		cout<<"Batasan atas dan bawah tidak valid"<<endl;
	else
	{
		n=(bawah%2);
		if(n==1)
		bawah++;
		
		while(bawah<atas)
		{
			cout<<bawah<<" ";
			bawah+=2;
		}
	}
}