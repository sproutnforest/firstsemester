#include<iostream>
using namespace std;

int main()
{
	int n, x, count;
	char word[50], fin[50];
	cin>>n;
	for(x=0; x<n; x++)
	{
		cin>>word[x];
	}
	
	count=0;
	for(x=0; x<n; x++)
	{
		cout<<word[x]<<endl;
		if(word[x]>='a' && word[x]<='z')
		{
			fin[count]=word[x];
			count++;
			cout<<" hello "<<word[x]<<endl;
		}
	}
	
	for(x=0; x<count; x++)
	{
		cout<<fin[x];
	}
}