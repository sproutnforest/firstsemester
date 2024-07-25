//Georgia Sugisandhea_535230080
#include<iostream>
using namespace std;

void cetakarray2d(int m[][10], int row, int col)
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

void sumrows(int m[][10], int (&sumr)[10], int row, int col)
{
	int i, j, sr[10], sum_row;
	
	for(i=0; i<row; i++)
	{
		sum_row=0;
		for(j=0; j<col; j++)
		{
			sum_row = sum_row + m[i][j];
		}
		sr[i]=sum_row;
	}
	
	cout<<"sum row = [";
	for(i=0; i<row; i++)
	{
		cout<<sr[i]<<" ";
	}
	cout<<"]\n";
}

void sumcols(int m[][10], int(&sumc)[10], int row, int col)
{
	int i, j, sc[10], sum_col;
	
	for(i=0; i<col; i++)
	{
		sum_col=0;
		for(j=0; j<row; j++)
		{
			sum_col=0;
			for(j=0; j<row; j++)
			{
				sum_col=sum_col+m[j][i];
			}
			sc[i]=sum_col;
		}
	}
	
	cout<<"sum col = [";
	for(i=0; i<col; i++)
	{
		cout<<sc[i]<<" ";
	}
	cout<<"]\n";
}

int main()
{
	int a[10][10], sumr[10], sumc[10];
	int row, col, x, y;
	cout<<"Ketikkan jumlah baris: ";
	cin>>row;
	cout<<"Ketikkan jumlah kolom: ";
	cin>>col;
	
	cout<<"Ketikkan elemen array 2D (matriks): "<<endl;
	for(x=0; x<row; x++)
	{
		for(y=0; y<col; y++)
		{
			cout<<"A["<<x<<","<<y<<"] = ";
			cin>>a	[x][y];
		}
	}
	
	cout<<"Cetak array 2D (matriks): "<<endl;
	cetakarray2d(a, row, col);
	
	sumrows(a, sumr, row, col);
	sumcols(a, sumc, row, col);
	
	return 0;
}