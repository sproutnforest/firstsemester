#include<iostream>
#include<string>
using namespace std;

int main()
{
	char again;
	int prod, many, price, tprice, gtotal, loop, total[15];
	string item[15];
	again='y';
	prod=0;
	gtotal=0;
	
	cout<<gtotal<<endl;
	while(again=='y'||again=='Y')
	{
		cout<<"Masukkan nama barang= ";
		cin>>item[prod];
		cout<<"Jumlah= ";
		cin>>many;
		cout<<"Harga per satuan= ";
		cin>>price;
		
		tprice=price*many;
		if(many>=10 && many<25)
		{
			total[prod]=tprice-tprice*0.05;
		}
		else if(many>=25 && many<50)
		{
			total[prod]=tprice-tprice*0.1;
		}
		else if(many>=50 && many<100)
		{
			total[prod]=tprice-tprice*0.15;
		}
		else if(many>=100)
		{
			total[prod]=tprice-tprice*0.2;
		}
		else
		{
			total[prod]=tprice;
		}
		
		cout<<total[prod];
		gtotal=gtotal+total[prod];
		cout<<gtotal;
		cout<<"Apakah masih ada barang lain? (y/t)";
		cin>>again;
		prod++;
	}
	
	cout<<"====================BILL===================="<<endl;
	for(loop=0; loop<prod; loop++)
	{
		cout<<loop+1<<". "<<item[loop]<<"------------------"<<total[loop]<<endl;
	}
	cout<<"Grand total = "<<gtotal;
}
//25 minutes