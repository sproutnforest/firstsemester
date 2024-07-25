#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int main()
{
	int n; 
	double x, gic[359];
	
	for(n=0; n<=359; n++)
	{
		x=sin(n);
		gic[n]=x;
	}
	
	for(n=0; n<=359; n++)
	{
		cout<<gic[n]<<endl;
	}
}