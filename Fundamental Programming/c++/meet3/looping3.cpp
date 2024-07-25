#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int a;
	cout<<"Using while:"<<endl;
	a=1;
	while(a<=20)
	{
		cout<<a<<" ";
		a = a+1;
	}
	
	cout<<endl<<endl;
	
	cout<<"Using for:"<<endl;
	for(a=1; a<=20; a++)
	{
		cout<<a<<" ";
	}
	return 0;
}