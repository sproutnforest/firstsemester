#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int a, t;
	cin>>a;
	t=a;
	while(a>1)
	{
		a=a-1;
		t=a*t;
	}
	cout<<"hasil faktorial anda adalah "<<t;
}