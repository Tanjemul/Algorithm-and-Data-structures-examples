#include<stdio.h>
#include<stdlib.h>
struct Node
{	
int data;
struct Node* next;
};
int main()
{
	struct Node* newnode1;
	newnode1 = (struct Node*)malloc(sizeof(struct Node));
	newnode1->data=100;
	newnode1->next=NULL;
	
	struct Node* newnode2;
	newnode2 = (struct Node*)malloc(sizeof(struct Node));
	newnode2->data=500;
	
	newnode2->next = newnode1;
	
	printf("%d %d\n", newnode2->data, newnode2->next);
	printf("%d %d\n", newnode1->data, newnode1->next);
	printf("%d %d", newnode2, newnode1);
return 0;
}


