//Georgia Sugisandhea_535230080

#include<iostream>
using namespace std;

int main()
{
	int A[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
	int B[4][4] = {{3,2,1,0}, {7,6,5,4}, {1,0,9,8}, {1,4,5,2}};
	int x, y, r1, c1, r2, c2;
	
	r1=sizeof(A)/sizeof(A[0]); //to determine number of rows
	c1=sizeof(A[0])/sizeof(A[0][0]); //to determine number of columns
	
	cout<<"Jumlah baris matriks A = "<<r1<<endl;
	cout<<"Jumlah kolom matriks A = "<<c1<<endl;
	
	cout<<"Matriks A\n";
	for(x=0; x<r1; x++)
	{
		for(y=0; y<c1; y++)
		{
			cout<<A[x][y]<<" ";
		}
		cout<<endl;
	}
	
	cout<<endl;
	
	r2=sizeof(B)/sizeof(B[0]);
	c2=sizeof(B[0])/sizeof(B[0][0]);
	
	cout<<"Jumlah baris matriks B= "<<r2<<endl;
	cout<<"Jumlah kolom matriks B= "<<c2<<endl;
	
	cout<<"Matriks B\n";
	for(x=0; x<r2; x++)
	{
		for(y=0; y<c2; y++)
		{
			cout<<B[x][y]<<" ";
		}
		cout<<endl;
	}
	return 0;
}