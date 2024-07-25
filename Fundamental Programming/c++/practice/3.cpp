#include<iostream>
using namespace std;

int main()
{
	int x[10], i, min, max, sel;
	void see(int x[10], int &min, int &max);
	void selisih(int min, int max, int &sel);
	for(i=0; i<10; i++)
	{
		cout<<i+1<<". ";
		cin>>x[i];
	}
	see(x, min, max);
	selisih(min, max, sel);
}

void see(int x[10], int &min, int &max)
{
	int i;
	min=x[1];
	max=x[1];
	
	for(i=0; i<10; i++)
	{
		if(x[i]<min)
		{
			min=x[i];
		}
		if(x[i]>max)
		{
			max=x[i];
		}
	}
	cout<<min<<" "<<max<<endl;
}

void selisih(int min, int max, int &sel)
{
	sel=max-min;
	cout<<"Selisihnya adalah "<<sel<<endl;
}