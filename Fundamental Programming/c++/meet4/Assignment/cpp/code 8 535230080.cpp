//535230080_Georgia Sugisandhea_kelas C
#include<iostream>
#include<math.h>
using namespace std;

void V(float t)
{
	float vt;
	vt = (t+0.1)*exp(sqrt(t));
	cout<<"Tegangan kapasitor pada t= "<<t<<" detik= "<<vt<<endl;
}

int main()
{
	float waktu;
	cout<<"Ketikkan waktu (t): ";
	cin>>waktu;
	
	V(waktu);
	
	return 0;
}