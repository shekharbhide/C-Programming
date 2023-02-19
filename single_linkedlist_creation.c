// program to create a sinle linked list

#include <stdio.h>
#include <stdlib.h>

int main(){
	struct SLL
	{
		int data;
		struct SLL * link;
	}
	
	*head = NULL,*p,*n; // head = pointer to first node in SLL, t=temp, n= newly created node
	int d,ch,ch1,ch2;
	
	// creating node dynamically
	
	do
	{
		n=(struct SLL *)malloc(sizeof(struct SLL));
		printf("\n Enter the data for node in the linked list:");
		scanf("%d",&d);
		n->data=d;  // assign the data;
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
		
		printf("\n Do u want to add new node in linked list \n");
		printf("\n 1.YES 2.NO");
		scanf("%d",&ch);
		
	}while(ch!=2);
	
	printf("\n Linked list is ::");
	p=head;
	
	while(p!=NULL)
	{
		printf("\t %d ->",p->data);
		p=p->link;
	}
	
	printf("Which operation u want to perform: \n");
	printf("\n 1.Insertion \n 2.Delete \n 3.Display \n 4.Search");
	scanf("%d",&ch1);
	switch(ch1)
	{
		case 1:
				printf("where u want to insert:");
				printf("\n 1.Front \n 2.End \n specific location \n ");
				scanf("%d",&ch2);
				switch(ch2)
				{
					case 1: //insert at front
					n=(struct SLL *)malloc (sizeof(struct SLL));
					printf("\n Enter the node:");
					scanf("%d",&d);
					n->data=d; //assign the data
					n->link=NULL;
					// check SLL is empty or not
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
		
					// display linked list
					printf("\n Linked list is::");
					p=head;
					while(p!=NULL);
					{
						printf("\t %d ->",p->data);
						p=p->link;
					}
					break;
					
					
					
				}
	
	}
	
	
	return 0;
}
