#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a;
	cin>>a;
	int i=0;
	int *arr=new int[a];
	for( i=0;i<a;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+a);
	int sum=1;
	for(i=0;i<a;i++)
		sum=sum+arr[i];
	cout<<sum;
	return 0;
}