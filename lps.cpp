#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
 
// A utility function to print a substring str[low..high]
void printSubStr(char* str, int low, int high)
{
    for( int i = low; i <= high; ++i )
    {
        printf("%c", str[i]);
    }
}
int longestPalSubstr(char *str)
{
	int maxl=1;
	int len=strlen(str);
	int low,high;
	int start;
	for(int i=1;i<len;i++){
		low=i-1;
		high=i;
		while(low>=0&&high<len&&str[low]==str[high])
		{
			if(high-low+1>maxl)
			{
				start=low;
				maxl=high-low+1;
			}
			--low;
			++high;
		}
		low=i-1;
		high=i+1;
		while(low>=0&&high<len&&str[low]==str[high])
		{
			if(high-low+1>maxl)
			{
				start=low;
				maxl=high-low+1;
			}
			--low;
			++high;
		}
	}
	cout<<"longest string is"<<endl;printSubStr(str,start,start+maxl-1);
	return maxl;

}

int main()
{
    char str[] = "forgeeksskeegfor";
    printf("\nLength is: %d\n", longestPalSubstr( str ) );
    return 0;
}