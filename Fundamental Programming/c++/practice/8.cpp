#include<iostream>
#include<string>
using namespace std;

int main()
{
	int jenis;
	double inp, outp;
	string satuan;
	
	cout<<"1. lb -> kg"<<endl;
	cout<<"2. kg -> lb"<<endl;
	cout<<"3. in -> cm"<<endl;
	cout<<"4. cm -> in"<<endl;
	cout<<"5. ft -> in"<<endl;
	cout<<"6. in -> ft"<<endl;
	cout<<"7. m -> cm"<<endl;
	cout<<"8. cm -> m"<<endl;
	cout<<"Masukkan operasi yang kalian inginkan = ";
	cin>>jenis;
	cout<<"Masukkan nilai awal = ";
	cin>>inp;
	
	switch(jenis)
	{
		case 1:
			{
				outp=inp*0.454;
				satuan="kg";
				break;
			}
		case 2:
			{
				outp=inp*2.20462;
				satuan="lb";
				break;
			}
		case 3:
			{
				outp=inp*2.54;
				satuan="cm";
				break;
			}
		case 4:
			{
				outp=inp*0.394;
				satuan="inch";
				break;
			}
		case 5:
			{
				outp=inp*12;
				satuan="inch";
				break;
			}
		case 6:
			{
				outp=inp*0.0833;
				satuan="ft";
				break;
			}
		case 7:
			{
				outp=inp*100;
				satuan="cm";
				break;
			}
		case 8:
			{
				outp=inp*0.01;
				satuan="m";
				break;
			}
		default:
			{
				outp=0;
				satuan=" ";
				cout<<"Kode yang dimasukkan salah ";
				break;
			}
	
	}
	
	cout<<"Hasil konversi = "<<outp<<" "<<satuan;
}