//Georgia Sugisandhea_535230080_KelasC
#include<iostream>
using namespace std;

int main()
{
	char jawaban[41];
	int i, N;
	float nY=0, nT=0, nA=0, nI=0, pY=0, pT=0, pA=0, pI=0;
	
	cout<<"Ketikkan jumlah data: ";
	cin>>N;
	
	for(i=0; i<N; i++)
	{
		cout<<"Ketikkan huruf (Y/T/A/y/t/a): ";
		cin>>jawaban[i];
		if(jawaban[i]=='Y' || jawaban[i]=='y')
		{
			nY++;
		}
		else if(jawaban[i]=='T' || jawaban[i]=='t')
		{
			nT++;
		}
		else if(jawaban[i]=='A' || jawaban[i]=='a')
		{
			nA++;
		}
		else
		{
			nI++;
		}
	}
	
	pY=nY/N*100;
	pT=nT/N*100;
	pA=nA/N*100;
	pI=nI/N*100;
	
	cout<<endl;
	cout<<"Persentase jawaban ya adalah "<<pY<<"%"<<endl;
	cout<<"Persentase jawaban tidak adalah "<<pT<<"%"<<endl;
	cout<<"Persentase jawaban tidak yakin/tidak tahu adalah "<<pA<<"%"<<endl;
	cout<<"Persentase jawaban tidak valid adalah "<<pI<<"%"<<endl;
	
	return 0;
}