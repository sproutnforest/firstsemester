#include <iostream>
using namespace std;

struct mhs
	{
		string npm [5];
		string nama [5];
		float nilai [5];
	};
	
int main()
{
	int n;
	mhs a;
	
	for(n=0; n<=5; n++)
	{
		cout<<n<<". Nama= ";
		cin>>a.nama[n];
		cout<<endl<<endl;
	}
	
	for(n=0; n<=5; n++)
	{
		cout<<n<<". Nama= ";
		cout<<a.nama[n];
		cout<<endl<<endl;
	}
	
	
//	mhs1.npm = "535111001";
//	mhs1.nama = "Elizabeth Olsen";
//	mhs1.nilai = 80.5;
//	
//	mhs2.npm = "535122202";
//	mhs2.nama = "Ronald Green";
//	mhs2.nilai = 75.6;
//	
//	cout<< mhs1.npm <<" "<<mhs1.nama<<" "<<mhs1.nilai<<"\n";
//	cout<< mhs2.npm <<" "<<mhs2.nama<<" "<<mhs2.nilai<<"\n";
	
	return 0;
}



//struct mahasiswa //struct name, or you can have it with no name
//{
//	char nama_mhs[30] //first field
//	char npm[10] //second field
//	real nilai //thrid field
//}





















