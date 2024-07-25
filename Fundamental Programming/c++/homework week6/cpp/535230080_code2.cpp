//Georgia Sugisandhea_535230080
#include<iostream>
using namespace std;

int main()
{
	string name[20];
	char end, choice;
	int n=0, ans[20][100], sum=0, score[20], key[100], count=1, x;
	void answer(int n, int (&ans)[20][100]);
	void kunci(int (&key)[100]);
	void check(int ans[20][100], int (&score)[20], int &sum, int key[100], int n);
	
	kunci(key);
	cout<<"Tampilkan kunci jawaban? (y/t) ";
	cin>>choice;
	if(choice=='y' || choice=='Y')
	{
		for(x=0; x<100; x++)
		{
			cout<<x+1<<". "<<key[x]<<endl;
		}
	}
	
	cout<<"=============================================Lembar Mahasiswa============================================="<<endl;
	
	end='y';
	while(end=='y' || end=='Y')
	{
	cout<<"Nama mahasiswa= ";
	cin>>name[n];
	answer(n, ans);
	check(ans, score, sum, key, n);
	if(score[n]>=60)
		cout<<"Selamat anda lulus dengan nilai "<<score[n]<<"!"<<endl;
	else
		cout<<"Maaf anda tidak lulus dengan nilai "<<score[n]<<endl;
	cout<<"Apakah ada mahasiswa selanjutnya? (y/n) ";
	cin>>end;
	n++;
	}
	
	if(sum>0)
	{
	cout<<"Jumlah siswa yang lulus adalah "<<sum<<endl;
	cout<<"Selamat kepada "<<endl;
	for(x=0; x<=n; x++)
	{
		if(score[x]>=60)
		{
			cout<<count<<". "<<name[x]<<" dengan nilai "<<score[x]<<endl;
			count++;
		}
	}
	}
	else
		cout<<"Maaf, tidak ada siswa yang lulus";
		
	return 0;
}

void answer(int n, int (&ans)[20][100])
{
	int x;
	cout<<"Jawaban dijawab dengan 1/2/3/4/5, jika jawaban lebih dari 1, silahkan masukkan 6"<<endl;
	cout<<"Masukkan jawaban kamu! "<<endl;
	for(x=0; x<100; x++)
	{
		cout<<x+1<<". ";
		cin>>ans[n][x];
	}
	cout<<"Terima kasih!"<<endl;
}

void check(int ans[20][100], int (&score)[20], int &sum, int key[100], int n)
{
	int x, right=0, wrong=0;
	cout<<"Checking score..."<<endl;
	for(x=0; x<100; x++)
	{
		if(ans[n][x]==key[x])
			right++;
		else
			wrong++;
	}
	
	score[n]=right;
	if(score[n]>=60)
		sum++;
}

void kunci(int (&key)[100])
{
	int x, choice=3;
	
	while(choice>2)
	{
	cout<<"Apakah kamu mau: "<<endl;
	cout<<"1. Menggunakan kunci sendiri"<<endl;
	cout<<"2. Menggunakan kunci yang sudah ada"<<endl;
	cout<<"Masukkan 1/2= ";
	cin>>choice;
	
	if(choice==2)
	{
	key[0]=1;
	key[1]=2;
	key[2]=3;
	key[3]=4;
	key[4]=5;
	key[5]=1;
	key[6]=2;
	key[7]=3;
	key[8]=4;
	key[9]=5;
	key[10]=5;
	key[11]=1;
	key[12]=2;
	key[13]=3;
	key[14]=6;
	key[15]=5;
	key[16]=1;
	key[17]=2;
	key[18]=3;
	key[19]=6;
	key[20]=5;
	key[21]=1;
	key[22]=2;
	key[23]=3;
	key[24]=4;
	key[25]=5;
	key[26]=1;
	key[27]=2;
	key[28]=6;
	key[29]=4;
	key[30]=5;
	key[32]=1;
	key[31]=2;
	key[33]=3;
	key[34]=4;
	key[35]=5;
	key[36]=1;
	key[37]=2;
	key[38]=3;
	key[39]=4;
	key[40]=5;
	key[41]=1;
	key[42]=2;
	key[43]=3;
	key[44]=6;
	key[45]=5;
	key[46]=1;
	key[47]=2;
	key[48]=3;
	key[49]=6;
	key[50]=5;
	key[51]=1;
	key[52]=2;
	key[53]=3;
	key[54]=4;
	key[55]=5;
	key[56]=1;
	key[57]=2;
	key[58]=6;
	key[59]=4;
	key[60]=5;
	key[61]=1;
	key[62]=2;
	key[63]=3;
	key[64]=6;
	key[65]=5;
	key[66]=1;
	key[67]=2;
	key[68]=3;
	key[69]=6;
	key[70]=5;
	key[71]=1;
	key[72]=2;
	key[73]=3;
	key[74]=4;
	key[75]=5;
	key[76]=1;
	key[77]=2;
	key[78]=6;
	key[79]=4;
	key[80]=5;
	key[81]=1;
	key[82]=2;
	key[83]=3;
	key[84]=4;
	key[85]=5;
	key[86]=1;
	key[87]=2;
	key[88]=3;
	key[89]=4;
	key[90]=5;
	key[91]=1;
	key[92]=2;
	key[93]=3;
	key[94]=6;
	key[95]=5;
	key[96]=1;
	key[97]=2;
	key[98]=3;
	key[99]=6;
	}
	else if(choice==1)
	{
	cout<<"Masukkan kunci jawaban! "<<endl;
	for(x=0; x<100; x++)
	{
		cout<<x+1<<". ";
		cin>>key[x];
	}
	}
	else
		cout<<"Maaf kode yang anda masukkan salah "<<endl;
	}
}