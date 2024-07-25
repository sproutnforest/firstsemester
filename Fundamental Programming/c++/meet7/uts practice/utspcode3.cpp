//Georgia Sugisandhea_535230080
#include<iostream>
using namespace std;

int main()
{
	void mineln(int (&bomb)[7][7]);
	int bomb[7][7], row, col, count, co, cu=10;
	cout<<"Welcome to the mineland, be careful or u will explode"<<endl;
	
	
	mineln(bomb);
	for(co=1; co<=10; co++)
	{
		cout<<"Attempt "<<co<<endl;
		cout<<"What's your row guess? ";
		cin>>row;
		cout<<"What's your column guess? ";
		cin>>col;
		
		if(bomb[row][col]==777)
		{
			cout<<"Congratulations! You won the mineland"<<endl;
			break;
		}
		else if(bomb[row][col]==-1)
		{
			cout<<"Sorry you guessed bigbomb, your attempt are reduced by 3"<<endl;
			co+=3;
			cu-=4;
		}
		else if(bomb[row][col]==0)
		{
			cout<<"Sorry you guessed bomb"<<endl;
			cu--;
		}
		else
		{
			cout<<"Why are you out of the land?"<<endl;
			cu--;
		}
		
		if(cu<0)
			cu=0;
		cout<<"Try again, you have "<<cu<<" attempt left"<<endl;
		cout<<"======================================================"<<endl;
	}
	
	if(bomb[row][col]!=777)
		cout<<"Sorry, you're exploded and lost";
	
	return 0;
}

void mineln(int (&bomb)[7][7])
{
	bomb[1][1]=-1;
	bomb[1][2]=0;
	bomb[1][3]=777;
	bomb[1][4]=-1;
	bomb[1][5]=0;
	bomb[2][1]=0;
	bomb[2][2]=-1;
	bomb[2][3]=-1;
	bomb[2][4]=0;
	bomb[2][5]=0;
	bomb[3][1]=-1;
	bomb[3][2]=-1;
	bomb[3][3]=-1;
	bomb[3][4]=0;
	bomb[3][5]=0;
	bomb[4][1]=-1;
	bomb[4][2]=0;
	bomb[4][3]=0;
	bomb[4][4]=-1;
	bomb[4][5]=0;
	bomb[5][1]=-1;
	bomb[5][2]=0;
	bomb[5][3]=0;
	bomb[5][4]=0;
	bomb[5][5]=0;
}