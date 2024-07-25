#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main (){
	float indeks;
	string polusi;
	
	cout<<"Masukkan indeks polusi: ";
	cin>>indeks;
	
	if(indeks<35)
	polusi="nyaman";
	else if(indeks>=35&&indeks<=60)
	polusi="tidak nyaman";
	else
	polusi="berbahaya";
	
	cout<<"Polusinya sedang "<<polusi<<endl;
	
	return 0;
}