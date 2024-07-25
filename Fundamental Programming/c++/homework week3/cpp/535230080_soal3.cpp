//535230080_Georgia Sugisandhea
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n, sekarang, baru, gajis, gajib;
	string nama;
	
	n=1;
	gajis=0;
	gajib=0;
	while(n<=20)
	{
		cout<<n<<". Masukkan nama pemain= ";
		cin>>nama;
		cout<<"Masukkan gaji sekarang= ";
		cin>>sekarang;
		
		if(sekarang<=10000000)
			baru=sekarang+(sekarang*0.2);
		else if(sekarang<=15000000)
			baru=sekarang+(sekarang*0.1);
		else if(sekarang<=20000000)
			baru=sekarang+(sekarang*0.05);
		else
			baru=sekarang;
		
		cout<<"Gaji sekarang= Rp."<<baru<<endl;
		
		gajis=gajis+sekarang;
		gajib=gajib+baru;
		n++;
	}
	cout<<"Jumlah gaji sebelumnya adalah Rp."<<gajis<<endl;
	cout<<"Jumlah gaji setelah kenaikan adalah Rp."<<gajib<<endl;
	
	return 0;
}