#include<iostream>
//#include<conio.h>
#include<string.h>


using namespace std;

int vow(char *str)
{int count=0;
	for(int i=4;i<strlen(str)-4;i++)
	{
		if((str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'))
				count++;
	}
	return count;
}

int  main()
{
	char str[101];
	int count=0;
	int tc;
	cin>>tc;
	for(int j=0;j<tc;j++)
	{
	cin>>str;
	count=vow(str);
	cout<<strlen(str)-count-4<<"/"<<strlen(str)<<endl;
	}
	return 0;
}

