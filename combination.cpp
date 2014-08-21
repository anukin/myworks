#include <stdio.h>
#include <iostream>
using namespace std;
void combinationUtil(int arr[], int data[], int start, int end, int index, int r);
 
// The main function that prints all combinations of size r
// in arr[] of size n. This function mainly uses combinationUtil()

void printCombination(int arr[], int n, int r)
{
    // A temporary array to store all combination one by one
    int data[r];
 
    // Print all combination using temprary array 'data[]'
    combinationUtil(arr, data, 0, n-1, 0, r);
}
void combinationUtil(int arr[],int data[],int start,int end,int index,int r)
{
	int i=0;
	if(index==r)
	{
		for(i=0;i<r;i++)
		{
			cout<<data[i];
		}
		cout<<endl;
	}
	
	for(i=start;i<=end&&end-i+1>=r-index+1;i++)
	{
		data[index]=arr[i];
		combinationUtil(arr,data,i+1,end,index+1,r);
	}
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int r = 3;
    int n = sizeof(arr)/sizeof(arr[0]);
    printCombination(arr, n, r);
}