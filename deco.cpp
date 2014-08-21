#include<iostream>
#include<cstring>
using namespace std;
int decodedp(char *digits,int n)
{
 int count[n+1];
 count[0]=count[1]=1;
 for(int i=2;i<=n;i++)
 {
  count[i]=0;
  if(digits[i-1]>'0')
  {
   count[i]=count[i-1];
  }
  if(digits[i-2]<'2'||(digits[i-2]=='2'&&digits[i-1]<'7'))
  {
   count[i]+=count[i-2];
  }
  
 }
 return count[n];
}
int main()
{
    char digits[] = "1234";
    int n = strlen(digits);
    cout << "Count is " << decodedp(digits, n);
    return 0;
}
