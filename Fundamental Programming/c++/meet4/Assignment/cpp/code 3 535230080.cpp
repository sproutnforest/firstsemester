//535230080_Georgia Sugisandhea_kelas C
#include <iostream>
using namespace std;

int main()
{
	int fac, nilai; 
	int factorial(int nilai);
	cout<<"Ketikkan angka : ";
	cin>>nilai;
	
	//calling the function
	fac = factorial(nilai);
	cout<<"Faktorial dari "<<nilai<<" adalah "<<fac<<endl;
	
	return 0;
}
int factorial(int N) //first int for the result, second int for parameter, user defined function
{
	int i, fac=1;
		
	for(i=N; i>=1; i--)
	{
		fac = fac*i;
	}
		
	return fac;
	}

	
	