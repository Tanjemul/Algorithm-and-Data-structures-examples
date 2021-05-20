#include<stdio.h>
#include<stdlib.h>
struct Node
{	
int data;
struct Node* next;
};
int main()
{
	int n,temp,i,m;
	struct Node* start;
	start = (struct Node*)malloc(sizeof(struct Node));
	
	printf("Enter number of nodes\n");
	scanf("%d",&n);
	
	printf("Enter the value:\n");
	scanf("%d",&temp);
	
	struct Node* temp1;
	temp1 = start;
	temp1->data = temp;
	
	for(i=2;i<=n;i++)
	{
		struct Node* newnode;
		newnode = (struct Node*)malloc(sizeof(struct Node));
		scanf("%d",&m);
		newnode->data = m;
		newnode->next = temp1->next;
		temp1->next = newnode;
		printf("%d\n",newnode->data);
	}

	//printf("Elements are:\n");
	//temp1=start;
	//while(i!=n)
	//{
	//	printf("%d->",temp1->data);
	//	temp1 = temp1->next;
	//	break;
	//}
	
return 0;
}


