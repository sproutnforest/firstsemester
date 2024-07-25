//Georgia Sugisandhea_535230080
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	void hitung_rev();
	hitung_rev();
	
	return 0;
}

void hitung_rev()
{
	float x, y, h;
	int n;
	
	x=3;
	y=4;
	n=1;
	if(x<y)
		h=x+1;
	else
		h=pow(x,n) + pow(y,n);	
	cout<<"Hasil perhitungan= "<<h;
}