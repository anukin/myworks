#include <stdio.h>
#include <stdlib.h>
 
// Binary Tree node
struct node
{
    int data;
    struct node* left, *right;
};
 
// A utility function to allocate a new tree node with given data
struct node* newNode(int data)
{
    struct node* node = (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->left =  node->right = NULL;
    return (node);
}
int getLevelDiff(node *root)
{
	if(root==NULL)
	{
		return 0;
	}
	return (root->data - getLevelDiff(root->left)-getLevelDiff(root->right));
}

int main()
{
    struct node *root = newNode(5);
    root->left = newNode(2);
    root->right = newNode(6);
    root->left->left  = newNode(1);
    root->left->right = newNode(4);
    root->left->right->left = newNode(3);
    root->right->right = newNode(8);
    root->right->right->right = newNode(9);
    root->right->right->left = newNode(7);
    printf("%d is the required difference\n", getLevelDiff(root));
    getchar();
    return 0;
}