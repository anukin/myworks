#include<iostream>

#include<string.h>


using namespace std;


int gcd(int a,int b)
{int c;
	if(a>=b)
		c=b;
	else
		c=a;
	for(int i=c;i>0;i--)
		{
			if(a%i==0&&b%i==0)
				return i;
		}
	


}

int  main()
{
	
	int count=1;
	int tc,a,b,c;
	cin>>tc;
	
	for(int j=0;j<tc;j++)
	{
		cin>>a;
		cin>>b;
		count=1;
		while(1)
		{
			if(a==1&&b==1)
				{
					cout<<"Draw\n";
					break;
				}
			else if(a==1)
				{
					cout<<"Chandu Don"<<"\n";
					break;
				}
			else if(b==1)
				{
					
					cout<<"Arjit"<<"\n";
							break;
				}
			c=gcd(a,b);
			if(c>1)
			{
				if(count%2!=0)
					{b--;
					b=b/gcd(a,b);}
				else
				{
					a--;
						a=a/gcd(a,b);
				}
			

			}
			else if(c==1)
				{
					if(count%2!=0)
					{b--;
					}
				else
				{
					a--;
					
				}
				}
				count++;
		}
	}
	return 0;
}