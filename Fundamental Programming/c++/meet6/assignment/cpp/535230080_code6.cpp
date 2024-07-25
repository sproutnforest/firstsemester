//Georgia Sugisandhea_535230080
#include<iostream>
using namespace std;

void cetak(int m[50][50], int r, int c)
{
	int i, j;
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			cout<<m[i][j]<<" ";
		}
		cout<<endl;
	}
}

void inputarray2d(int (&m)[50][50], int &row, int &col)
{
	int x, y;
	
	cout<<"Ketikkan jumlah baris: ";
	cin>>row;
	cout<<"Ketikkan jumlah kolom: ";
	cin>>col;
	
	cout<<"Ketikkan elemen matriks ukuran "<<row<<" X "<<col<<endl;
	
	for(x=0; x<row; x++)
	{
		for(y=0; y<col; y++)
		{
			cout<<"M["<<x<<","<<y<<"] = ";
			cin>>m[x][y];
		}
	}
}

void sumarray2d(int m1[50][50], int m2[50][50], int (&m3)[50][50], int row1, int col1, int row2, int col2)
{
	int x, y;
	
	if((row1==row2)&&(col1==col2))
	{
		for(x=0; x<row1; x++)
		{
			for(y=0; y<col1; y++)
			{
				m3[x][y]=m1[x][y]+m2[x][y];
			}
		}
		
		cout<<"Matriks hasil penjumlahan: \n";
		cetak(m3, row2, col2);
	}
	
	else
	{
		cout<<"Operasi penjumlahan tidak bisa dilakukan karena ukuran matriks pertama dan kedua tidak sama \n";
	}
}

void multiplyarray2d(int m1[50][50], int m2[50][50], int (&m3)[50][50], int row1, int col1, int row2, int col2)
{
	int i, j, k;
	
	if(col1==row2)
	{
		for(i=0; i<row1; ++i)
		{
			for(j=0; j<col2; ++j)
			{
				m3[i][j] += m1[i][k] * m2[k][j];
			}
		}
		
		cout<<"Matriks hasil perkalian: \n";
		cetak(m3, row1, col2);
	}
	
	else
	{
		cout<<"Operasi perkalian gagal karena ukuran baris matriks pertama dan kolom matriks ke dua tidak sama \n";
	}
}

int main()
{
	int a[50][50], b[50][50], c[50][50], x, y, row1, col1, row2, col2;
	
	inputarray2d(a, row1, col1);
	inputarray2d(b, row2, col2);
	
	cout<<"Matriks pertama: \n";
	cetak(a, row1, col1);
	
	cout<<"Matriks kedua: \n";
	cetak(b, row2, col2);
	
	sumarray2d(a, b, c, row1, col1, row2, col2);
	multiplyarray2d(a, b, c, row1, col1, row2, col2);
	
	return 0;
}