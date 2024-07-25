//535230080_Georgia Sugisandhea_kelas C
#include<iostream>
#include<math.h>
using namespace std;

void hitung(float x, float y, int n)
{
	float h;
	
	if(x<y)
	{
		h=x+1;
	}
	else
	{
		h=pow(x,n)+pow(y,n);
	}
	cout<<"Hasil perhitungan adalah "<<h<<endl;
}

int main()
{
	int n;
	float x, y;
	
	cout<<"Ketikkan nilai x = ";
	cin>>x;
	
	cout<<"Ketikkan nilai y = ";
	cin>>y;
	
	cout<<"Ketikkan nilai n = ";
	cin>>n;
	
	hitung(x,y,n);
	
	return 0;
}