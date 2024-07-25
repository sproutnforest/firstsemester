//Georgia Sugisandhea_535230080
#include<iostream>
using namespace std;

int main()
{
	void hitung(float p, float l, float t, float &keliling, float &luas, float &volume);
	float p, l, t, volume, keliling, luas;
	cout<<"Masukkan panjang= ";
	cin>>p;
	cout<<"Masukkan lebar= ";
	cin>>l;
	cout<<"Masukkan tinggi= ";
	cin>>t;
	hitung(p, l, t, keliling, luas, volume);
	cout<<"Hasilnya:"<<endl;
	cout<<"Keliling = "<<keliling<<endl;
	cout<<"Luas permukaan= "<<luas<<endl;
	cout<<"Volume= "<<volume<<endl;	
}

void hitung(float p, float l, float t, float &keliling, float &luas, float &volume)
{
	keliling= 4*(p+l+t);
	luas=2*(p*l + p*t + l*t);
	volume= p*l*t;
}