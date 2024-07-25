//535230080_Georgia Sugisandhea_kelas C
#include<iostream>
using namespace std;

void factorial(int n)
{
	int i, fak = 1;
	
	for(i=n;i>=1;i--)
	{
		fak=fak*i;
	}
	cout<<"Faktorial dari "<<n<<" adalah "<<fak<<endl;
}

int main()
{
	int fak, nilai;
	
	cout<<"Ketikkan angka: ";
	cin>>nilai;
	factorial(nilai);
	
	return 0;
}