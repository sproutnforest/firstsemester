//535230080_Georgia Sugisandhea

#include <iostream>
using namespace std;

int main()
{
	int bil, n, t, x, w, y, d;
	float rata;
	
	cout<<"Masukkan banyak bilangan= ";
	cin>>y;
	bil=y%2;
	n=0;
	t=0;
	if(bil==0)
	 cout<<"Bilangan yang anda masukkan adalah genap"<<endl;
	else
	 cout<<"Bilangan yang anda masukkan adalah ganjil"<<endl;
	w=1;
	n=0;
	t=0;
	x=0;
	while(w<=y)
	{
	cout<<"Masukkan angka= ";
	cin>>n;
	d=n%2;
	if(d==0)
	{
		cout<<n<<" adalah bilangan genap"<<endl;
		t+=n;
		x++;
	}
	else
		cout<<n<<" adalah bilangan ganjil"<<endl;
	
	w++;
}
	rata=t/x;
	cout<<"Jumlah bilangan genap anda adalah "<<t<<endl;
	cout<<"Rata rata bilangan genap anda adalah "<<rata<<endl;
return 0;
}
	