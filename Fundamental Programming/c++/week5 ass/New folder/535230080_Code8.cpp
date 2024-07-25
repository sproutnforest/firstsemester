//Georgia Sugisandhea_535230080_KelasC
#include<iostream>
using namespace std;

void printArray(float arr[], int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void selectionSortAsc(float arr[], int n)
{
	int i, j, min_idx;
	
	for(i=0; i<n-1; i++)
	{
		min_idx= i;
		for(j=i+1; j<n; j++)
		{
			if(arr[j]<arr[min_idx])
				min_idx=j;
		}
		if(min_idx != i)
			swap(arr[min_idx], arr[i]);
	}
}

void selectionSortDesc(float arr[], int n)
{
	int i, j, max_idx;
	
	for(i=0; i<n-1; i++)
	{
		max_idx = i;
		for(j=i+1; j<n; j++)
		{
			if(arr[j]>arr[max_idx])
				max_idx=j;
		}
		
		if(max_idx !=i)
			swap(arr[max_idx], arr[i]);
	}
}

int main()
{
	float data[50];
	int n, a;
	 cout<<"Ketikka jumlah angka yang akan diurutkan: ";
	 cin>>n;
	 
	 cout<<"Ketikkan data "<<endl;
	 for(a=0; a<n; a++)
	 {
	 	cout<<"Data ke "<<a+1<<" : ";
	 	cin>>data[a];
	 }
	 
	 cout<<"Data asli: "<<endl;
	 printArray(data, n);
	 
	 cout<<"Data secara ascending: "<<endl;
	 selectionSortAsc(data, n);
	 printArray(data, n);
	 
	 cout<<"Data secara descending: "<<endl;
	 selectionSortDesc(data, n);
	 printArray(data, n);
	 
	 return 0;
}






