#include <iostream>
#include <string>
using namespace std;				

int main()
{

string s="abcd";
string t="abcde";

char a[s.length() + 1];
char b[t.length() + 1];

strcpy(a, s.c_str());
strcpy(b, t.c_str());
char fin;
int i, n, sum=0;

int total=s.length();
int totbl=t.length();

for(i=0; i<totbl; i++)
{
	
    for(n=0; n<total; n++)
    {
        if(a[n]==b[i])
        {
            sum+=1;
        } 
    }
	
    if(sum==0)
    {
        fin=b[i];
        break;
    }
    
    sum=0;
}

return fin;
}