//Georgia Sugisandhea_535230080
#include<iostream>
using namespace std;

int main()
{
	char end='y';
	string name[20];
	int n=0, sum=0, count=0, info[20][3], x, paym[20];
	void pay(int info[20][3], int (&paym)[20], int n);
	
	while(end=='y' || end=='Y')
	{
		count++;
		cout<<"Nama pekerja= ";
		cin>>name[n];
		cout<<"Golongan= ";
		cin>>info[n][1];
		cout<<"Jumlah hari kerja= ";
		cin>>info[n][0];
		pay(info, paym, n);
		sum+=paym[n];
		info[n][2]=paym[n];
		cout<<"Apakah masih ada karyawan selanjutnya? (y/t) ";
		cin>>end;
		cout<<info[n][2];
		n++;
	}
	
	cout<<"| "<<"No."<<" | "<<"nama"<<" | "<<"jumlah hari kerja"<<" | "<<"golongan"<<" | "<<"gaji"<<" | "<<endl;
	for(x=0; x<count; x++)
	{
		cout<<"| "<<x+1<<" | "<<name[x]<<" | "<<info[x][0]<<" | "<<info[x][1]<<" | "<<info[x][2]<<" | "<<endl;
	}
	
	cout<<"Gaji total= "<<sum;
}

void pay(int info[20][3], int (&paym)[20], int n)
{
	if(info[n][1]==1)
		paym[n]=2000000+(50000*info[n][0]);
	else if(info[n][1]==2)
		paym[n]=2500000+(60000*info[n][0]);
	else if(info[n][1]==3)
		paym[n]=2750000+(75000*info[n][0]);
	else if(info[n][1]==4)
		paym[n]=3000000+(100000*info[n][0]);
	else
		cout<<"Maaf kode yang anda masukkan salah";
	
}

