#include<iostream>
#include<string>
using namespace std;

int main()
{
	int tag, total;
	float grand, pr, bl;
	char kred;
	string thx;
	
	cout<<"Masukkan total tagihan anda = ";
	cin>>tag;
	cout<<"Apakah anda menggunakan kartu kredit ABC? (y/t)";
	cin>>kred;
	
	if(tag>=500000)
	{
		if(kred=='y'||kred=='Y')
		{
			thx="Terima kasih telah menggunakan kredit ABC, anda mendapat diskon 25%";
			total=tag-(tag*0.25);
		}
		else if(kred=='t'||kred=='T')
		{
			thx="Anda mendapat diskon 10%";
			total=tag-(tag*0.1);
		}
		else
		{
			cout<<"Maaf kode tidak dikenali";
			thx="";
			total=tag;
		}
	}
	else
	 thx="Anda tidak mendapat diskon";
	
	grand=total+(total*0.11)+(total*0.05);
	pr=total*0.11;
	bl=total*0.05;
	
	cout<<"==========================SLIP TAGIHAN======================="<<endl;
	cout<<"Tagihan = Rp."<<tag<<endl;
	cout<<thx<<endl;
	cout<<"Pajak restoran 11% = Rp."<<pr<<endl;
	cout<<"Biaya layana 5% = Rp."<<bl<<endl;
	cout<<"Grand total = Rp."<<grand<<endl;
	
}
//12.37 minutes