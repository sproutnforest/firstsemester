#include <iostream>
#include <math.h>
using namespace std;
//1-1/2+1/4
int main()
{
	int n, z;
	float y, x;
	x=1;
	y=0;
	for(n=2; n<=100; n++)
	{
		z=n%2;
		y+=2;
		if(z==0)
			x-=(1/y); //x=x-1/y
		
		else
			x+=(1/y);
		
		cout<<"x="<<x<<endl;
		cout<<"y="<<y<<endl;
	}
	cout<<x;
}