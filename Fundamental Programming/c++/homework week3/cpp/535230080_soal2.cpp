//535230080_Georgia Sugisandhea
#include <iostream>
using namespace std;

int main()
{
	float x, t;
	int y,n;
	t=1;
	for(n=2; n<=100; n++)
	{
		y=n%2;
		x=x+2;
		if(y==0)
			t=t-(1/x);
		else
			t=t+(1/x);
	}
	cout<<t;
	
	return 0;
}