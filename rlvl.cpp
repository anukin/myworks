#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node* left;
    struct node* right;
};

void printGivenLevel(struct node* root, int level);
int height(struct node* node);
struct node* newNode(int data);
int hieght(node *root)
{
	if(root==NULL)
	{
		return 0;
	}
	else
	{
		int lhieght=hieght(root->left);
		int rhieght=hieght(root->right);
		if(lhieght>rhieght)
		{
			return (lhieght+1);
		}
		else
		{
			return (rhieght+1);
		}
	}
}


struct node* newNode(int data)
{
    struct node* node = (struct node*)
                        malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
 
    return(node);
}
void printGivenLevel(node *root,int level)
{
	if(root==NULL)
	{
		return ;
	}
	if(level==1)
	{
		cout<<root->data;
	}
	if(level>1)
	{
		printGivenLevel(root->left,level-1);
		printGivenLevel(root->right,level-1);
	}

}
void reverseLevelOrder(node *root)
{
	int h=hieght(root);
	int i;
	for(i=h;i>=1;i--)
	{
		printGivenLevel(root,i);
	}
}


 
/* Driver program to test above functions*/
int main()
{
    struct node *root = newNode(1);
    root->left        = newNode(2);
    root->right       = newNode(3);
    root->left->left  = newNode(4);
    root->left->right = newNode(5);
 
    printf("Level Order traversal of binary tree is \n");
    reverseLevelOrder(root);
 
    return 0;
}