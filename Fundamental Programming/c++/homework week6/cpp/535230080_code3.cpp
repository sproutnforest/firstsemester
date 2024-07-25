//Georgia Sugisandhea_535230080
#include<iostream>
using namespace std;

int main()
{
	int h, w, x, y, bel[20][20], up[20][20], tran;
	void blend(int bel[20][20], int up[20][20], int h, int w, int tran);
	cout<<"Blending"<<endl;
	cout<<"Berapa panjang matriks foto anda? ";
	cin>>h;
	cout<<"Berapa lebar matriks foto anda? ";
	cin>>w;
	cout<<"Masukkan nilai warna foto pertama per baris (0-255)"<<endl;
	for(x=0; x<w; x++)
	{
		cout<<"Baris ke-"<<x+1<<endl;
		for(y=0; y<h; y++)
		{
			cout<<"matriks["<<x+1<<","<<y+1<<"] = ";
			cin>>bel[x][y];
		}
	}
	
	cout<<"Masukkan nilai warna foto kedua per baris (0-255)"<<endl;
	for(x=0; x<w; x++)
	{
		cout<<"Baris ke-"<<x+1<<endl;
		for(y=0; y<h; y++)
		{
			cout<<"matriks["<<x+1<<","<<y+1<<"] = ";
			cin>>up[x][y];
		}
	}
	cout<<"Masukkan nilai transparansi foto kedua = ";
	cin>>tran;
	
	cout<<"Hasil Blending= "<<endl;
	blend(bel, up, h, w, tran);
	
	return 0;
}

void blend(int bel[20][20], int up[20][20], int h, int w, int tran)
{
	int fin[20][20], x, y;
	
	for(x=0; x<w; x++)
	{
		for(y=0; y<h; y++)
		{
			fin[x][y]=tran*(up[x][y]+(1-tran/100)*bel[x][y]);
		}
	}
	
	cout<<endl<<"----------------------------------"<<endl;
	for(x=0; x<w; x++)
	{
		for(y=0; y<h; y++)
		{
			cout<<fin[x][y]<<" | ";
		}
		cout<<endl<<"----------------------------------"<<endl;
	}
}





