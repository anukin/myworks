#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
 
struct node
{
    int data;
    struct node *left, *right;
};
 
// A utility function to create a new Binary Tree node
struct node *newNode(int item)
{
    struct node *temp =  (struct node *)malloc(sizeof(struct node));
    temp->data = item;
    temp->left = temp->right = NULL;
    return temp;
}
void leftviewutil(node *root,int lvl,int *maxlvl)
{
	if(root==NULL)
	{
		return;
	}
	if(lvl>*maxlvl)
	{
		cout<<root->data;
		*maxlvl=lvl;
	}
	leftviewutil(root->left,lvl+1,maxlvl);
	leftviewutil(root->right,lvl+1,maxlvl);

}
void leftView(node *root)
{
	int maxlvl=0;
	leftviewutil(root,1,&maxlvl);
}




int main()
{
    struct node *root = newNode(12);
    root->left = newNode(10);
    root->right = newNode(30);
    root->right->left = newNode(25);
    root->right->right = newNode(40);
 
    leftView(root);
 
    return 0;
}