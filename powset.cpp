#include <iostream>
#include <cstdio>
using namespace std;
void printPowerSet(char *arr,int n)
{
	int i=0;
	for(i=0;i<8;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i&(1<<j))
			{
				cout<<arr[j];
			}

		}
		cout<<endl;

	}
}

int main()
{
    char set[] = {'a','b','c'};
    printPowerSet(set, 3);
 
    getchar();
    return 0;
}