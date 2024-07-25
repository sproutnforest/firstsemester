//Georgia Sugisandhea_535230080
#include<iostream>
using namespace std;

int main()
{
	int rows, cols, i, j;
	int a[50][50];
	
	cout<<"Ketikkan jumlah baris: ";
	cin>>rows;
	cout<<"Ketikkan jumlah kolom: ";
	cin>>cols;
	
	cout<<"Ketikkan elemen matriks ukuran "<<rows<<" X "<<cols<<endl;
	
	for(i=0; i<rows; i++){
		for(j=0; j<cols; j++)
		{
			cout<<"a["<<i<<","<<j<<"] = ";
			cin>>a[i][j];
		}
	}
	
	cout<<"Cetak matriks"<<"\n";
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"Cetak matriks upper triangular"<<"\n";
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			if(i>j)
			{
				cout<<0<<" ";
			}
			else
			{
				cout<<a[i][j]<<" ";
			}
		}
		cout<<"\n";
	}
	
	cout<<"Cetak matriks lower triangular \n";
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			if(i>=j)
			{
				cout<<a[i][j]<<" ";
			}
			else
			{
				cout<<0<<" ";
			}
		}
		cout<<"\n";
	}
	
	return 0;
}