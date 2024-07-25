#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int can=0, quarter, dime, nickel, penny;
	double price;
	void change(double price, int &quarter, int &dime, int &nickel, int &penny);
	
	while(can<1 || can>5)
	{
	cout<<"MENU"<<endl;
	cout<<"1. Sourpatch ---- $0.5"<<endl;
	cout<<"2. Agustus gloop choco ---- $0.79"<<endl;
	cout<<"3. Amber Gum ---- $0.34"<<endl;
	cout<<"4. Sugar rush licorice ---- $0.27"<<endl;
	cout<<"5. Blotched pillow candy ---- $0.46"<<endl;
	cout<<"Which candy would you like to buy? (1/2/3/4/5) "<<endl;
	cin>>can;
	
	switch(can)
	{
		case 1:
		{
			price=0.5;
			break;
		}
		case 2:
		{
			price=0.79;
			break;
		}
		case 3:
		{
			price=0.34;
			break;
		}
		case 4:
		{
			price=0.27;
			break;
		}
		case 5:
		{
			price= 0.46;
			break;
		}
		default:
			cout<<"Sorry we dont have that candy yet, please try again "<<endl;
	}
	}
	
	change(price, quarter, dime, nickel, penny);
	cout<<"Your total = $"<<price<<endl;
	cout<<"Your change is = "<<quarter<<" quarter, "<<dime<<" dime, "<< nickel <<" nickel, "<<penny<<" penny. "<<endl;
	cout<<"thankyou";
	
}

void change(double price, int &quarter, int &dime, int &nickel, int &penny)
{
	double loose;
	
	quarter=floor(price/0.25);
	loose=fmod(price,0.25);
	dime=floor(loose/0.1);
	loose=fmod(loose, 0.1);
	nickel=floor(loose/0.05);
	loose=fmod(loose, 0.05);
	penny=floor(loose/0.01);
}