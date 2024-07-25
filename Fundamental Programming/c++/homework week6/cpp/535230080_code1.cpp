//Georgia Sugisandhea_535230080
#include<iostream>
using namespace std;

int main()
{
	int x, y, i, j, t[15][15], r;
	j=1;
	
	for(x=1; x<=10; x++)
	{
		for(y=10; y>=x-2; y--)
		{
			
			cout<<" ";
		}
		
		for(i=1; i<=x; i++)
		{
			if(i==1 || i==x)
			{
				cout<<j<<" ";
				t[x][i]=j;
			}
			
			else
			{
				r=t[x-1][i-1]+t[x-1][i];
				t[x][i]=r;
				cout<<r<<" ";
			}
		}
		for(y=9; y>=x-1; y--)
		{
			
			cout<<" ";
		}
		cout<<endl;
	}
}