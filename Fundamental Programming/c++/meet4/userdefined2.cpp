//calling function multiple times, and multiple parameters

#include <iostream>
using namespace std;

float average(float a, float b, float c)
{
	float rata;
	rata=(a+b+c)/3;
	return rata;
}

int main()
{
	float rt;
	rt=average(1,5,7);
	cout<<"Nilai rata rata dari 1, 5, dan 7 adalah "<<rt<<endl;
	
	rt=average(80,65,70);
	cout<<"Nilai rata rata dari 80, 65, dan 70 adalah "<<rt<<endl; 
	
	return 0;
}