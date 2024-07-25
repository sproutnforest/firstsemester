#include <iostream>
using namespace std;

//user defined that returns 1 value
int factorial(int N) //first int for the result, second int for parameter, user defined function
{
	int i, fac=1;
		
	for(i=N; i>=1; i--)
	{
		fac = fac*i;
	}
		
	return fac;
	}

int main()
{
	int fac, nilai; //theres no function declaration because the function is above, if the function is below, you have to declare it
	cout<<"Ketikkan angka : ";
	cin>>nilai;
	
	//calling the function
	fac = factorial(nilai);
	cout<<"Faktorial dari "<<nilai<<" adalah "<<fac<<endl;
	
	return 0;
}
	
	