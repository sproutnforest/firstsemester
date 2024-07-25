//Georgia Sugisandhea_535230080
#include<iostream>
using namespace std;

int row, col;

void cetakarray2d(int **m)
{
	int i, j;
	
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			cout<<m[i][j]<<" ";
		}
		cout<<endl;
	}
}

int** inputarray2d()
{
	int** arr= new int*[row];
	
	cout<<"Ketikkan elemen array 2D: "<<endl;
	for(int i=0; i<row; ++i)
	{
		arr[i]=new int[row];
		for(int j=0; j<col; ++j)
		{
			cout<<"arr["<<i<<","<<j<<"] = ";
			cin>>arr[i][j];
		}
	}
	return arr;
}

void** sumarray2d(int **A, int **B)
{
	int **C = new int*[row];
	int x, y;
	
	for(x=0; x<row; x++)
	{
		C[x]= new int[row];
		for(y=0; y<col; y++)
		{
			C[x][y]=A[x][y] + B[x][y];
		}
	}
	
	cout<<"Matriks hasil penjumlahan:\n";
	cetakarray2d(C);
}

int main()
{
	int **A, **B;
	int x, y;
	
	cout<<"Ketikkan jumlah baris matriks : ";
	cin>>row;
	cout<<"Ketikkan jumlah kolom matriks : ";
	cin>>col;
	
	A = inputarray2d();
	B = inputarray2d();
	
	cout<<"Cetak matriks 1: "<<endl;
	cetakarray2d(A);
	cout<<"Cetak matriks 2: "<<endl;
	cetakarray2d(B);
	sumarray2d(A, B);
	
	return 0;
}