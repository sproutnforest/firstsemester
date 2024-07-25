#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
	ifstream myfile ("Temperatur.txt");
	
	if(myfile.is_open())
	{
		while(getline (myfile, nilai))
		{
			data[count]=std::stof(nilai);
			sum=sum+data[count];
			count++;
		}
		myfile.close();
	}
}