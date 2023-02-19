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
		printf("\t %d ->",p->data);
		p=p->link;
	}
	
	printf("\n\n******Main Menu*****");
	printf("\nChoose the operation from the following:\n");
	printf("\n1]Insert \n2]Delete \n3]Display \n4]Search");
	printf("\n=========================================\n");
	scanf("%d",&ch1);
	switch(ch1)
	{
		case 1: //Insert
			printf("\nWhere do you want to insert:");
			printf("\n1]Front \n2]End \n3]Specific Loaction\n");
			scanf("%d",&ch2);
			switch(ch2)
			{
				case 1://Insert the node at the front
					n=(struct SLLNODE*)malloc(sizeof(struct SLLNODE));
					printf("\nEnter the node:");
					scanf("%d",&d);
					n->data=d; //assign the data
					n->link=NULL;
					//Check the SLL is empty or not
					if(head==NULL)
					{
						head==p;
						n=head;
					}
					else
					{
						n->link=head;
						head=n;
					}
					//display LL
					printf("\nLinked List::");
					p=head;
					while(p!=NULL)
					{
						printf("\t %d ->",p->data);
						p=p->link;
					}
					break;
					
					case 2: // Insert at END
					//check for SLL is empty.
					if(head==NULL)
					{
						head=n;
					}
					else
					{
						p=head;
						while(p->link!=NULL)	
						{
							p=p->link;
						}
						p->link=n;	
					}
					//display LL
					printf("\nLinked List::");
					p=head;
					while(p!=NULL)
					{
						printf("\t %d ->",p->data);
						p=p->link;
					}
					break;
					
				
			}
	}
}
