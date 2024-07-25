#include<iostream>
using namespace std;

int main()
{
	float B[4][4] = {{3,2,1,0}, {7,6,5,4}, {1,0,9,8}, {1,4,5,2}};
	int i, j;
	
	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
		{
			cout<<B[i][j]<<" ";
		}
		cout<<endl;
	}
}