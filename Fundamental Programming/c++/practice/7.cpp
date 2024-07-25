#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n, x, j[5], nilai, hasil[5], total;
	float luas;
	string name;
	int count(int nilai, float luas);
	
	cout<<"Nama = ";
	cin>>name;
	
	cout<<"Menu"<<endl;
	cout<<"Untuk ladang kacang kedelai, kentang, bawang merah, dan cabai, masukkan 1"<<endl;
	cout<<"Untuk ladang padi, singkong, dan jagung masukkan 2"<<endl;
	cout<<"Untuk sisanya, ketikkan 3"<<endl;
	cout<<"Ada berapa jenis ladang yang anda miliki? ";
	cin>>n;
	
	for(x=0; x<n; x++)
	{
		cout<<"Masukkan jenis ladang ke- "<<x+1<<" ";
		cin>>j[x];
		cout<<"Masukkan nilai tanggungan per hektar";
		cin>>nilai;
		cout<<"Masukkan luas tanah";
		cin>>luas;
		hasil[x]=count(nilai, luas);
		
		switch(j[x])
		{
			case 1:
				{
					hasil[x]=hasil[x]*2;
					break;
				}
			case 2:
				{
					hasil[x]=hasil[x]*1.5;
					break;
				}
			case 3:
				{
					hasil[x]=hasil[x];
					break;
				}
		}
		cout<<"Biaya asuransi dari jenis ladang ini adalah "<<hasil[x]<<endl;
		
		total+=hasil[x];
	}
		
		cout<<"============================SLIP TAGIHAN=============================="<<endl;
		cout<<"Nama = "<<name<<endl;
		for(x=0; x<n; x++)
		{
			cout<<x+1<<". Jenis ladang = "<<j[x]<<" dengan tagihan "<<hasil[x]<<endl;
		}
		cout<<"Total tagihan = "<<total<<endl;
		cout<<"=======================================================================";
		

	
	
	
	
}
int count(int nilai, float luas)
{
	int total;
	total=0.035*nilai*luas;
	
	return total;
}