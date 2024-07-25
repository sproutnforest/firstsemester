//Georgia Sugisandhea - Kelas C - 535230080

#include <iostream>
#include <math.h>
#include <string>
using namespace std;
int main ()
{
	float uts, praktikum, uas, nilai;
	string predikat;
	
	cout<<"Masukkan nilai uts anda= ";
	cin>>uts;
	cout<<"Masukkan nilai uas anda= ";
	cin>>uas;
	cout<<"Masukkan nilai praktikum anda= ";
	cin>>praktikum;
	
	nilai=(0.3*uts)+(0.2*praktikum)+(0.5*uas);
	
	if(nilai>=90)
	predikat="A";
	else if(nilai>=80)
	predikat="B";
	else if(nilai>=70)
	predikat="C";
	else if(nilai>=60)
	predikat="D";
	else if(nilai>=50)
	predikat="E";
	else
	predikat="F";
	
	if(predikat=="E" || predikat=="F")
	cout<<"Maaf anda tidak lulus dengan nilai "<<nilai<<" dan predikat "<<predikat<<endl;
	else
	cout<<"Selamat! Anda lulus dengan nilai "<<nilai<<" dan predikat "<<predikat<<endl;
	
	return 0;
	
}