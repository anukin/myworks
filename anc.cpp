#include<iostream>
#include<stdio.h>
#include<stdlib.h>
 
using namespace std;
 
/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct node
{
   int data;
   struct node* left;
   struct node* right;
};
bool printAncestors(node *root,int target)
{
	if(root==NULL)
	{
		return false;
	}
	if(root->data==target)
	{
		return true;
	}
	if(printAncestors(root->left,target)||printAncestors(root->right,target))
	{
		cout<<root->data<<endl;
		return true;
	}
	return false;
}

struct node* newnode(int data)
{
  struct node* node = (struct node*)
                       malloc(sizeof(struct node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;
 
  return(node);
}
 
/* Driver program to test above functions*/
int main()
{
 
 
  struct node *root = newnode(1);
  root->left        = newnode(2);
  root->right       = newnode(3);
  root->left->left  = newnode(4);
  root->left->right = newnode(5);
  root->left->left->left  = newnode(7);
 
  printAncestors(root, 7);
 
  getchar();
  return 0;
}