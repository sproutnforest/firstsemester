//535230080_Georgia Sugisandhea_kelas C
#include<iostream>
using namespace std;

float average(float a, float b, float c)
{
	float rata;
	rata=(a+b+c)/3;
	return rata;
}

int main()
{
	float a, b, c;
	float rt;
	
	cout<<"Ketikkan nilai A: ";
	cin>>a;
	cout<<"Ketikkan nilai B: ";
	cin>>b;
	cout<<"Ketikkan nilai C: ";
	cin>>c;
	
	rt = average(a, b, c);
	cout<<"Nilai rata-rata dari ("<<a<<","<<b<<","<<c<<") adalah "<<rt<<endl;
	
	return 0;
}