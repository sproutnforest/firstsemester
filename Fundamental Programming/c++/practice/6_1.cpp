#include<iostream>
using namespace std;

int main()
{
	int b1, b2, b3, c1[15][15];
	for(b1=0; b1<10; b1++)
	{
		for(b3=10; b3>=b1; b3-=2)
		{
			cout<<" ";
		}
		for(b2=0; b2<=b1; b2++)
		{
			if(b2==0 || b2==b1)
			{
				c1[b1][b2]=1;
			}
			else
			{
				c1[b1][b2]=c1[b1-1][b2-1]+c1[b1-1][b2];
			}
			cout<<c1[b1][b2]<<" ";
		}
		cout<<endl;
		for(b3=10; b3>=b1; b3--)
		{
			cout<<" ";
		}
	}
}