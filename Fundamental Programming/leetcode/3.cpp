#include<iostream>
#include<string>
using namespace std;

int main()
{
        string haystack="mississipi";
        string needle="pi";
        
        char one[haystack.length()+1];
        char two[needle.length()+1];

        strcpy(one, haystack.c_str());
        strcpy(two, needle.c_str());

        int mone=haystack.length();
        int mtwo=needle.length();
        int count=0, a, ncount=0, index=0, back=0;
        back-=1;

        for(a=0; a<mone; a++)
        {
            if(one[a]==two[ncount])
            {
                count+=1;
                ncount+=1;
                if(count==1)
                {
                    index=a;
                }
            }
            else
            {
            	if(count>0)
                {
                    a-=count-1;
                }
                count=0;
                ncount=0;
                index=back;
            }
            
            if(ncount==mtwo)
                break;
        }
        if(ncount==mtwo)
            return index;
        else
            return -1;
}