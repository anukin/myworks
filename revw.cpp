#include <cstdio>
#include <iostream>
using namespace std;
void reverse(char *begin, char *end)
{
  char temp;
  while (begin < end)
  {
    temp = *begin;
    *begin++ = *end;
    *end-- = temp;
  }
}
void reverseWords(char *s)
{
  char *str=s;
  char *start=s;
  while(*str)
  {
    str++;
    if(*str=='\0')
    {
      reverse(start,str-1);
    }
    else
    if(*str==' ')
    {
      reverse(start,str-1);
      start=str+1;

    }
  }
  reverse(s,str-1);
}

 
/* Driver function to test above functions */
int main()
{
  char s[] = "i like this program very much";
  char *temp = s;
  reverseWords(s);
  printf("%s", s);
  getchar();
  return 0;
}