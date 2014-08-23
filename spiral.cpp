#include<iostream>
using namespace std;
int main(){
	int a[3][3]={1,2,3,4,5,6,7,8,9};
	int i,j;
	int rowstart=0,colstart=0,rowend=2,colend=2;
	i=rowstart;
	j=colstart;
	while(rowstart<=rowend && colstart <= colend)
	{
		i=rowstart;
	    j=colstart;
		for(j=colstart;j<=colend;j++){
			cout<<a[i][j];
		}
		for(i=rowstart+1,j--;i<=rowend;i++){
			cout<<a[i][j];
		}
		for(j=colend-1,i--;j>=colstart;j--)
		{
			cout<<a[i][j];
		}
		for(i=rowend-1,j++;i>rowstart;i--)
		{
			cout<<a[i][j];
		}
		rowstart++,rowend--,colstart++,colend--;
	}
	return 0;

}