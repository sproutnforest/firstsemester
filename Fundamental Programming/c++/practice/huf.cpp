#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n, x, count, s;
	char h[50], w[50];
	string str;
	        
	cin>>n;
	cin>>str;
	for (size_t i = 0; i <n; i++) 
	{
        w[i] = str[i];
    }
    
    w[n] = '\0';
	
	count=0;
	s=0;
	for(x=0; x<n; x++)
	{
		if(w[x]>='a' && w[x]<='z')
		{
			h[count]=w[x];
			count++;
			s++;
		}
	}
	
	for(x=0; x<s; x++)
	{
		cout<<h[x];
	}
}