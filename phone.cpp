#include <stdio.h>
#include <string.h>
#include<iostream>
using namespace std;
 
// hashTable[i] stores all characters that correspond to digit i in phone
const char hashTable[10][5] = {"", "", "abc", "def", "ghi", "jkl",
                               "mno", "pqrs", "tuv", "wxyz"};





void printWordsUtil(int *number,int currdigit,char output[],int n){
	if(currdigit==n)
	{
		cout<<output;
		return;
	}
	for(int i=0;i<strlen(hashTable[number[currdigit]]);i++){
		output[currdigit]=hashTable[number[currdigit]][i];
		printWordsUtil(number,currdigit+1,output,n);
		if (number[currdigit] == 0 || number[currdigit] == 1)
            {return;}

	}

}
void printWords(int number[], int n)
{
    char result[n+1];
    result[n] ='\0';
    printWordsUtil(number, 0, result, n);
}
 
//Driver program
int main(void)
{
    int number[] = {2, 3, 4};
    int n = sizeof(number)/sizeof(number[0]);
    printWords(number, n);
    return 0;
}