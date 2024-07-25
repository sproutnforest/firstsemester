#include<iostream>
using namespace std;

int main()
{
	int nbarist;
	int nkolomt;
	int nbaris, nkolom;
	int matrikst[10][10];
	int matriks[10][10];
	int i, j;
	
	cout<<"Masukkan kolom matriks : ";
	cin>>nkolom;
	cout<<"Masukkan baris matriks : ";
	cin>>nbaris;
	
	nbarist=nkolom;
	nkolomt=nbaris;
	
	for(i=1;i<=nbaris;i++)
	{
		for(j=1;j<=nkolom;j++)
		{
			cout<<"Masukkan matriks["<<i<<"]["<<j<<"] : ";
			cin>>matriks[i][j];
		}
	}
	
	
	for(i=1;i<=nbaris;i++)
	{
		for(j=1;j<=nkolom;j++)
		{
			matrikst[i][j]=matriks[i][j];
		}
	}
	
	cout<<"Matriks awal: "<<endl;
	for(i=1;i<=nbaris;i++){
		for(j=1;j<=nkolom;j++)
		{
			cout<<matriks[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<"Hasil Transpose: "<<endl;
	for(i=1;i<=nbarist;i++)
	{
		for(j=1;j<=nkolomt;j++)
		{
			cout<<matrikst[j][i]<<" ";
		}
		cout<<endl;
	}
}