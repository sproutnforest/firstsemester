#include<iostream>
using namespace std;

int main()
{
	int loop, out;
	float run, per;
	run=1;
	per=2;
	
	for(loop=2; loop<=100; loop++)
	{
		out=loop%2;
		if(out==0)
		{
			run=run-(1/per);
		}
		else
		{
			run=run+(1/per);
		}
		per+=2;
	}
	
	cout<<run<<endl;
}