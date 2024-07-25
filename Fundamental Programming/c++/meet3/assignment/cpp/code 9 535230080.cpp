#include<iostream>
using namespace std;

int main()
{
	int i,j,k,x=0,y=0,z=0;
	for(i=1;i<=3;i++)
	{
		x=x+1;
		for(j=1;j<=3;j++)
		{
			y=y+1;
			for(k=1;k<=3;k++)
			{
				z=z+1;
			}
			cout<<"  Z = "<<z<<endl;
		}
		cout<<" Y = "<<y<<" Z = "<<z<<endl;
	}
	cout<<"X = "<<x<<" Y = "<<y<<" Z = "<<z<<endl;
	return 0;
}