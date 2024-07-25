//Georgia Sugisandhea_535230080_KelasC
#include<iostream>
using namespace std;

int main()
{
	int data[5]={1,2,3,4,5};
	int i;
	
	//size of() to return size of a type in byte
	cout<<sizeof(data)<<endl<<endl;
	
	for(i=0;i<5;i++)
	{
		cout<<data[i]<<endl;
	}
	
	return 0;
}