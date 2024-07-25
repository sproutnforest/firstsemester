#include<iostream>
#include<string>
using namespace std;

int main()
{
	char word[15];
	string early;
	int many;
	void pal(char word[15], int many);
	
	cout<<"Apa kata anda? ";
	cin>>early;
	many=early.length();
	early.copy(word, early.length());
	word[early.length()]='\0';
	pal(word, many);
}
void pal(char word[15], int many)
{
	int ok, no;
	no=many;
	for(ok=0; ok<many; ok++)
	{
		no--;
		if(word[ok]!=word[no])
			break;
	}
	
	if(word[ok-1]==word[no])
		cout<<"Kata ini adalah palindrome";
	else
		cout<<"Kata ini bukan palindrome";
}