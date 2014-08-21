#include<stdio.h>
#include<stdlib.h>
 
/* A linked list node */
struct node
{
  int data;
  struct node *next;
};
 
/*Function to swap two integers at addresses a and b */

void swap(int *a, int *b)
{
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}
node *pairWiseSwap(node *head){
	if(head==NULL||head->next==NULL){
		return head;
	}
	node * remaining=head->next->next;
	node *newhead=head->next;
	head->next->next=head;
	head->next=pairWiseSwap(remaining);
	return newhead;
}
 
/* Function to add a node at the begining of Linked List */
void push(struct node** head_ref, int new_data)
{
  /* allocate node */
  struct node* new_node =
            (struct node*) malloc(sizeof(struct node));
 
  /* put in the data  */
  new_node->data  = new_data;
 
  /* link the old list off the new node */
  new_node->next = (*head_ref);
 
  /* move the head to point to the new node */
  (*head_ref)    = new_node;
}
 
/* Function to print nodes in a given linked list */
void printList(struct node *node)
{
  while (node != NULL)
  {
    printf("%d ", node->data);
    node = node->next;
  }
}

int main()
{
  struct node *start = NULL;
 
  /* The constructed linked list is:
   1->2->3->4->5 */
  push(&start, 5);
  push(&start, 4);
  push(&start, 3);
  push(&start, 2);
  push(&start, 1);
 
  printf("\n Linked list before calling  pairWiseSwap() ");
  printList(start);
 
  node *h=pairWiseSwap(start);
 
  printf("\n Linked list after calling  pairWiseSwap() ");
  printList(h);
 
  getchar();
  return 0;
}