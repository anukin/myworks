#include<iostream>
//#include<conio.h>
#include<string.h>
#include<stack>

using namespace std;




int  main()
{
	
	int count=0;
	int tc,n,k,a[200];
	int i=0;
	cin>>tc;
	
	for(int j=0;j<tc;j++)
	{
		count=0;
		cin>>n>>k;
		for( i=0;i<n;i++)
			cin>>a[i];
		
	
		for( i=0;i<n-count-1;i++)
				if(a[i]<a[i+1]&&count!=k)
				{
					for(int l=i;l<n-count-1;l++)
					{	
						
						a[l]=a[l+1];

					}
					count++;
					for(int g=0;g<n-count-1;g++)
					{cout<<a[g]<<" ";
					  
					}
					cout<<endl;
					i=-1;
					
				}
				
				
		for(i=0;i<n-k;i++)
				cout<<a[i]<<" ";
		cout<<endl;
				
	}
	return 0;
}