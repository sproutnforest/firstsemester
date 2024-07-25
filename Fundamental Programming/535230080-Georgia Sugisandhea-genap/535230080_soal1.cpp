#include<iostream>
using namespace std;

int main()
{
	int menyu, stacko=1, dalla=0;
	
	cout<<"Welcome to BurgerMaker!"<<endl;
	while(menyu!=7)
	{
		cout<<"1. First Bun Rp 3.000"<<endl;
		cout<<"2. Beef Rp 10.000"<<endl;
		cout<<"3. Cheese Rp 5.000"<<endl;
		cout<<"4. Tomato Rp 2.000"<<endl;
		cout<<"5. Salad Rp 3.000"<<endl;
		cout<<"6. Onion RP 700"<<endl;
		cout<<"7. Last Bun Rp 3.000"<<endl;
		cout<<"Masukkan pilihan anda(1-7)? ";
		cin>>menyu;
		
		if(stacko==1)
		{
			if(menyu!=1)
			{
				if(menyu==7)
				{
					cout<<"Last Bun hanya bisa dipesan terakhir!"<<endl;
					menyu=6;
				}
				else
				{
					cout<<"Anda belum memesan Bun, pesan First Bun terlebih dahulu!"<<endl;
				}	
			}
			else
			{
				cout<<"First Bun ditambahkan!"<<endl;
				dalla+=3000;
				stacko++;
			}
		}
		
		else
		{
		switch(menyu)
		{
			case 1:
				{
					cout<<"First Bun hanya bisa ditambahkan pertama!"<<endl;
					break;
				}
			case 2:
				{
					cout<<"Beef ditambahkan!"<<endl;
					dalla+=10000;
					break;
				}
			case 3:
				{
					cout<<"Cheese ditambahkan!"<<endl;
					dalla+=5000;
					break;
				}
			case 4:
				{
					cout<<"Tomato ditambahkan!"<<endl;
					dalla+=2000;
					break;
				}
			case 5:
				{
					cout<<"Salad ditambahkan!"<<endl;
					dalla+=3000;
					break;
				}
			case 6:
				{
					cout<<"Onion ditambahkan!"<<endl;
					dalla+=700;
					break;
				}
			case 7:
				{
					if(stacko!=1)
					{
						cout<<"Last Bun ditambahkan!"<<endl;
						dalla+=3000;
						break;
					}
				}
			default:
				{
					cout<<"Maaf kode tidak ditemukan"<<endl;
					stacko--;
				}
		}
		stacko++;
		}
	}
	
	cout<<"Harga burger anda: Rp."<<dalla<<endl;
}












