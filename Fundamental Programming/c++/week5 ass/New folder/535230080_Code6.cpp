//Georgia Sugisandhea_535230080_KelasC
#include<iostream>
#include<fstream> //to stream file
#include<string>
using namespace std;

int main()
{
	string nilai;
	int count=0, i;
	float data[50], sum=0, avg;
	
	ifstream myfile ("Temperatur.txt");
	
	if(myfile.is_open()) //reading file
	{
		while(getline (myfile,nilai))
		{
			//converting string into float
			data[count] = std::stof(nilai);
			sum=sum+data[count];
			count++;
		}
		myfile.close();
	}
	else
	{
		cout<<"File tidak dapat dibuka";
		return 0;
	}
	
	avg=sum/count;
	cout<<"Temperatur rata-rata adalah "<<avg<<endl<<endl;
	
	for(i=0; i<count; i++)
	{
		cout<<"Temperatur hari ke "<<i+1<<" = "<<data[i]<<endl;
	}
	
	return 0;
}








