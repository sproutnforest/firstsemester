#include<iostream>
#include<string> //to use strtok
using namespace std;
int main()
{
	char str[]="Kuliah fundamental programming belajar c++";
	
	char *token = strtok(str, " "); //strtok is for cutting the called (str) into smaller pieces when they meet the required character, exm in this, " " (space)
	
	while(token != NULL)
	{
		cout<<token<<endl;
		token=strtok(NULL, " ");
	}
	
	return 0;
}