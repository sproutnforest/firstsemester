#include<iostream>
#include<math.h>
using namespace std;

void hitung(float t1, float t2, float &t3, float &t4, float &t5, float &t6)
{
	t3 = t1+t2;
	t4 = t1-t2;
	t5 = t1*t2;
	t6 = t1/t2;
}

int main()
{
	float t1, t2, t3=0, t4=0, t5=0, t6=0;
	
	cout<<"Ketikkan nilai t1 : ";
	cin>>t1;
	cout<<"Ketikkan nilai t2 : ";
	cin>>t2;
	
	cout<<"===============SEBELUM PEMANGGILAN FUNGSI==============="<<endl;
	cout<<"Nilai t1 sebelum pemanggilan fungsi: "<<t1<<endl;
	cout<<"Nilai t2 sebelum pemanggilan fungsi: "<<t2<<endl;
	cout<<"Nilai t3 sebelum pemanggilan fungsi: "<<t3<<endl;
	cout<<"Nilai t4 sebelum pemanggilan fungsi: "<<t4<<endl;
	cout<<"Nilai t5 sebelum pemanggilan fungsi: "<<t5<<endl;
	cout<<"Nilai t6 sebelum pemanggilan fungsi: "<<t6<<endl;
	
	hitung(t1, t2, t3, t4, t5, t6);
	cout<<"===============SEBELUM PEMANGGILAN FUNGSI==============="<<endl;
	cout<<"Nilai t1 setelah pemanggilan fungsi: "<<t1<<endl;
	cout<<"Nilai t2 setelah pemanggilan fungsi: "<<t2<<endl;
	cout<<"Nilai t3 setelah pemanggilan fungsi: "<<t3<<endl;
	cout<<"Nilai t4 setelah pemanggilan fungsi: "<<t4<<endl;
	cout<<"Nilai t5 setelah pemanggilan fungsi: "<<t5<<endl;
	cout<<"Nilai t6 setelah pemanggilan fungsi: "<<t6<<endl;
	
}