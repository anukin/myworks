#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
 struct node{
	int data;
	struct node *link[26];
};
node *root=NULL;

node *createnode(){
	node *q = new node;
	for(int i=0;i<26;i++){
		q->link[i]=NULL;
	}
	q->data=-1;
	return q;
}
void insert(string key){
	int l=key.length();
	int level;
	int index;
	if(root==NULL){
		root=createnode();
	}
	node *q=root;
	for(;level<l;level++){
		index=key[level]-'a';
		if(q->link[index]==NULL){
			q->link[index]=createnode();
		}
		q=q->link[index];
	}
	q->data=level;


}
int search(string key){
	node *q=root;
	int index;
	int i;
	int l=key.length();
	for( i=0;i<l;i++){
		index=key[i]-'a';
		if(q->link[index]!=NULL)
		{
			q=q->link[index];
		}
		else{
			break;
		}
	}
	if(key[i]=='\0' && q->data==-1){
		return q->data;
	}
	return -1;
}

int main(){
	insert("node");
	insert("network");
	insert("programming");
	cout<<search("node");
	cout<<search("root");
	return 0;

}
