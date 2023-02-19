/*
Name :: Shekhar Vishnu Bhide
Roll no. :: 06
Batch :S1
PR No.04
Title :: Write a C program to implement SLL & perform -
			1.Inserting a node at Front, at End & at specific position. and Display LL
			2.Deleting a node at Front, at End & at specific position. and Display LL
			3.Search a specific node.
*/

#include<stdio.h>
int main()
{
	// node structure
	struct SLLNODE
	{
		int data;
		struct SLLNODE *link;	
	}*head=NULL,*p,*n,*t,*q; // head = poimter to first in SLL t=temp n=nelwy created node
	int i,d,ch,loc;
	printf("\n\n***** WELCOME TO SLL PROGRAM!!! *****\n");
	// creating the NODE Dynamically....
	
	do{
	
			n=(struct SLLNODE *) malloc(sizeof(struct SLLNODE));  // allocating memory for creating a node.
			printf("\n Enter the data which to create copy in node :: ");
			scanf("%d",&d);
			n->data=d;   // Assign the data
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
			printf("\n Do you want to add new node ? Press ::  1-YES &  2-NO  ::  ");
			scanf("%d",&ch);
		}while(ch!=2);
	
	// display the Linked list
	printf("\n Content of LL is :: ");
	p=head;
	while(p!=NULL)
	{
		printf("\t%d-->",p->data);
		p=p->link;
	}
	do{
			printf("\n\n Which operation you want to perfrom ?");
			printf("\n\t A) Insertion of node - 1.at Front  2.at End  3.at specific position. \n\t B) Deletion of node -  4.at Front  5.at End  6.at specific position. \n\t\t\t\t7.Search the node.");
			printf("\n\t Enter your choice ::  ");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1: // Insert at FRONT	
					printf("\n Enter the node to insert at front :: ");
					scanf("%d",&n->data);
					if(head!=NULL)  // check if head is not empty
					{
						t->link=NULL;
					}
					else
					{
						t->link=head;
						head=t;
					}
					// display the new LL
					printf("\n Content of LL is :: ");
					p=head;
					while(p!=NULL)
					{
						printf("\t%d-->",p->data);
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
					// display the new LL
					printf("\n Content of LL is :: ");
					p=head;
					while(p!=NULL)
					{
						printf("\t%d-->",p->data);
						p=p->link;
					}		
				break;
				
				case 3:  // Insert at specific position.
				break;
				
				case 4:    // delete node at FRONT 
					// check the first element is empty or not.
					if(head==NULL)  
					{
						printf("\n You can't peform deletion.");
					}
					else
					{
						t=head;
						head=head->link;
						free(t);  // delete the  node
					}
					printf("\n Content of LL is :: ");
					p=head;
					while(p!=NULL)
					{
						printf("\t%d-->",p->data);
						p=p->link;
					}
				break;
				
				case 5:  // delete node at end
					if(head==NULL)
					{
						printf("\n You can't perform deletion.");
					}
					else if(head->link!=NULL)
					{
						t=head;
						while(t->link!=NULL)  // checking condition upto end
						{
							q=t;
							t=t->link;
						}
						free(t);
						q->link=NULL;
					}
					else
					{
						t=head;
						head=NULL;
						free(t);
					}
					printf("\n Content of LL is :: ");
					p=head;
					while(p!=NULL)
					{
						printf("\t%d-->",p->data);
						p=p->link;
					}
				break;
				
				case 6:  // delete a specific node
					printf("\n Enter the location of node which u want to delete ? :: ");
					scanf("%d",&loc);
					if(head==NULL)
					{
						printf("\n Linked list is Empty.");
					}
					else
					{
						t=head;
						for(i=1;i<=loc;i++)
						{
							p=t;
							t=t->link;
						}
						p->link=t->link;
						free(t);
					}
					
					printf("\n Content of LL is :: ");
					p=head;
					while(p!=NULL)
					{
						printf("\t%d-->",p->data);
						p=p->link;
					}
				break;	
				
				case 7:  // search the node 
					printf("\n Enter the node u want to search :: ");
					scanf("%d",&n->data);
					q=head;
					while(q!=NULL)
					{
						if(q->data==n->data)
						{
							printf("\n Node is found !!!");
							break;
						}
						q->link=q;  // continues with searching.
					}
					if(q==NULL)
					{
						printf("\n Node is not found.");
					}
				break;	
		   }
		   printf("\n\n Do you want to continue with operations ? ->  1.YES  2.NO. ::  ");
		   scanf("%d",&ch);
		}while(ch!=2);
		return 0;
}
