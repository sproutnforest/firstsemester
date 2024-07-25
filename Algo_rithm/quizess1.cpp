#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main ()
{
	int lalu, ini, x, y;
	float f;
	
	for(x=2; x<=10;x+=2)
	{
		for(y=3; y<=12; y+=3)
		{
			cout<<"x= "<<x<<" y= "<<y<<endl;
			f=((x^2)-(y^2))/((x^2)+(y^2));
			cout<<f<<endl;
		}
	}
}