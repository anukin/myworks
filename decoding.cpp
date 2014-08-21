#include <iostream>
#include <cstring>
using namespace std;
//used for counting the no of decodings
int countdecoding(char *digits,int n)
{
  if(n==0||n==1)//base case of only having 1 or none of chaacters
    {   
	return 1;
    }
  int count=0;
  if(digits[n-1]>'0')
  {
    count=countdecoding(digits,n-1) //used for counting no of cases in which only 1 is considered
  }
  if(digits[n-2]<'2'||(digits[n-2]=='2' && digits[n-1]<'7')) //used for groups(2) of bits
  {
   count+=countdecoding(digits,n-2);
  }
  return count;
}


int main()
{
    char digits[] = "1234";
    int n = strlen(digits);
    cout << "Count is " << countDecoding(digits, n);
    return 0;
}










