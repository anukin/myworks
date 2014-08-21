#include<stdio.h>

int a[3]={1, 2, 1};

char c[]={'0','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

void func(int i,char result[],int r)

{

int index;

int temp;

if(i>=3)

{

for(index=0;index<3;index++)

{

printf("%c, ",result[index]);

}

printf("\n");

return;

}

if(i+1<3)

{

temp = 10*a[i]+a[i+1];

if(temp<=26)

{

result[r]=c[temp];

func(i+2,result,r+1);

}

}

result[r]=c[a[i]];

func(i+1,result,r+1);

}

int main()

{

char result[10];

func(0,result,0);

}