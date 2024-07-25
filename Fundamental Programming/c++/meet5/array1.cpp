#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	string cars[4]={"Volvo", "BMW", "Ford", "Mazda"};
	int i;
	
	cout<<"Isi arrat indeks ke 0 adalah "<<cars[0]<<endl<<endl;
	
	cout<<"Mencetak isi dari array cars"<<endl;
	
	for(i=0; i<4; i++)
	{
		cout<<"Cars indeks ke "<<i<<" = "<<cars[i]<<endl;
	}
	return 0;
}