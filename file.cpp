#include <cstdio>
#include <iostream>
using namespace std;
int main(){
	FILE *fp;
	fp=fopen("one.txt","w");
	char ch;
	while((ch=getchar())!=EOF){
		putc(ch,fp);
	}
	fclose(fp);
	fp=fopen("one.txt","r");
	while((ch=getc(fp))!=EOF){
		cout<<ch;
	}
	fclose(fp);
	return 0;
}