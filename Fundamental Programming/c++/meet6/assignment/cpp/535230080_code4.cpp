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

void transpose(int m1[50][50], int(&m2)[50][50], int r, int c)
{
	for(int i=0; i<r; ++i)
	{
		for(int j=0; j<c; ++j)
		{
			m2[j][i]=m1[i][j];
		}
	}
	cout<<"Matriks Transpose\n";
	cetak(m2, c, r);
}

int main()
{
	int a[50][50], b[50][50], x, y, row, col;
	
	cout<<"Ketikkan jumlah baris: ";
	cin>>row;
	cout<<"Ketikkan jumlah kolom: ";
	cin>>col;
	
	cout<<"Ketikkan elemen matriks ukuran "<<row<<" x "<<col<<"\n";
	for(x=0; x<row; x++)
	{
		for(y=0; y<col; y++)
		{
			cout<<"A["<<x<<","<<y<<"] = ";
			cin>>a[x][y];
		}
	}
	
	cetak(a, row, col);
	transpose(a, b, row, col);
	return 0;
}






