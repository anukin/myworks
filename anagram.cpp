#include <iostream>
#include <map>
#include <cstring>
using namespace std;
map <char,int> charcount;
bool check(char *str1,char *str2)
{
	int l1=strlen(str1);
	if(l1!=strlen(str2))
	{
		cout<<"not anagram";
	}
	int i=0;
	for(i=0;i<l1;i++)
	{
		charcount[str1[i]]+=1;
	}
	for(i=0;i<l1;i++)
	{
		charcount[str2[i]]-=1;
	}
	for(map <char,int> ::iterator it=charcount.begin();it!=charcount.end();it++)
	{
		if(it->second)
		{
			cout<<"not anagram";
			return false;

		}
	}
	return true;



}
int main()
{
	char str1[]="damam";
	char str2[]="madme";
	bool i=check(str1,str2);
	if(i)
	{
		cout<<"anagram";
	}
	return 0;

}