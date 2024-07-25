#include <iostream>
using namespace std;

int main()
{
	int a, b;
	
	for(a=0; a<5; a++)
	{
		cout<<"a = "<<a<<endl;
		
		for(b=0; b<a; b++)
		{
			cout<<"b = "<<b<<endl;
		}
	}
	
	return 0;
}