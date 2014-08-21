#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}
void findNext(char number[], int n)
{
    int i, j;
 
   
    for (i = n-1; i > 0; i--)
        if (number[i] > number[i-1])
           break;
 
   
    if (i==0)
    {
        cout << "noe";
        return;
    }
 
   
    int x = number[i-1], smallest = i;
    for (j = i+1; j < n; j++)
        if (number[j] > x && number[j] < number[smallest])
            smallest = j;
 
  
    swap(&number[smallest], &number[i-1]);
 

    sort(number + i, number + n);
 
    cout  << number;
 
    return;
}
/*void findNext(char *num,int n)
{
	int i;
	for(i=n-1;i>0;i--)
	{
		if(num[i]<num[i-1])
		{
			break;
		}

  	  
	}
	if(i==0)
	{
		cout<<"none";
			return;
	}
	int x=num[i];
	int d=i;
	int smallest=d+1;
	for( i=d+1;i<n;i++)
	{
		if(x<num[i]&&num[i]<num[smallest])
		{
			smallest=i;
		}

	}
	swap(&num[d],&num[smallest]);
	sort(num+d+1,num+n);
	cout<<num;
}*/
int main()
{
    char digits[] = "534976";
    int n = strlen(digits);
    findNext(digits, n);
    return 0;
}