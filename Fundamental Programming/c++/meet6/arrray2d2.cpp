#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	float B[4][4]={{3,2,1,0}, {7,6,5,4}, {1,0,9,8}, (1,4,5,2)};
	float C[4][4];
	int i, j;
	
	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
		{
			C[i][j] = B[i][j]/23;
			cout<<fixed<<setprecision(2)<<C[i][j]<<" "<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}