#include<stdio.h>
#include<stdlib.h>
int main()
{
	//node structure
	struct SLLNODE
	{
		int data;
		struct SLLNODE*link;
	}
	*head=NULL,*p,*n; //head = pointer to first in SLL t = temp n = newly created node
	int d,ch,ch1,ch2,ch3;
	printf("\nWelcome to my SLL Program!!!");
	//creating the NODE Dynamically.....

	do
	{
		n=(struct SLLNODE *)malloc(sizeof(struct SLLNODE));
		printf("\nEnter the data for the node in Linked List:");
		scanf("%d",&d);
		n->data=d; //Assign the data
		n->link=NULL;

		if(head==NULL)
		{
			head=n;
			p=head;
		}
		else
		{
			p->link=n;
			p=n;
		}
		printf("\nDo you want to add new node in LL?");
		printf("\nPress 1-Yes and 2-No");
		scanf("%d",&ch);;
	}while(ch!=2);
	//display the Linked List
	printf("\nLinked List::");
	p=head;
	while(p!=NULL)
	{
		printf("\t %d->",p->data);
		p=p->link;
	}
	
return 0;
}
