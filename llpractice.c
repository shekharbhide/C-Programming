#include<stdio.h>
#include<stdlib.h>
int main()
{
	struct SLLNODE
	{
		int data;
		struct SLLNODE *next;
	}*head=NULL,*newNode,*p,*temp,*q,*key; 	
	int d,ch,i,loc,pos; // variable declaration
	do 
	{    // creating node dynamically.......
		newNode=(struct SLLNODE *)malloc(sizeof(struct SLLNODE));
		printf("Enter the data which u want add in node:");
		scanf("%d",&d);
		newNode->data=d;
		newNode->next=NULL;
		// check the ll is empty or not...
		if(head==NULL)
		{
			head=newNode;  //if the head is null it means there is no any node,so make the new node as HEAD
			p=head;			// assigne the varible p as a HEAD
		}
		else
		{
			p->next=newNode;
			p=newNode;
		}
		printf("\nDo want to add one more new node: 1.YES or 2.NO");
		scanf("%d",&ch);
	}while(ch!=2);
		// DISPLAY THE LINKED LIST
		printf("\nLINKED LIST IS:");
		p=head;
		while(p!=NULL)
		{
			printf("\t%d->",p->data);
			p=p->next;
		}
		
		do
		{
			printf("\nWhich operation do u want to perform on the linked list");
			printf("\nA.INSERTION \n\t1.AT FRONT \n\t2.AT END \n\t3.SPECIFIC LOCATION");
			printf("\nB.DELETION \n\t4.AT FRONT \n\t5.AT END \n\t6.SPECIFIC LOCATION \n7.SEARCH THE NODE");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1: // insert the node at the begining......
					newNode=(struct SLLNODE *)malloc(sizeof(struct SLLNODE));
					printf("\nEnter the new node to add at the front:");
					scanf("%d",&d);
					newNode->data=d;
					newNode->next=NULL;
					// CHECK LL IS EMPTY OR NOT
					if(head==NULL)
					{
						head=p;
						newNode=head;
					}
					else
					{
						newNode->next=head;
						head=newNode;
					}
					//disply the ll
					printf("\nLINKED LIST IS:");
					p=head;
					while(p!=NULL)
					{
						printf("\t%d->",p->data);
						p=p->next;
					}
				case 2: 		//INSERT AT THE END
					newNode=(struct SLLNODE *)malloc(sizeof(struct SLLNODE));
					printf("\nEnter the new node to insert at the end:");
					scanf("%d",&d);
					newNode->data=d;
					newNode->next=NULL;
					if(head==NULL)
					{
						head=newNode;
					}
					else
					{
						p=head;
						while(p->next!=NULL)
						{
							p=p->next;	
						}	
						p->next=newNode;
					}
					// display
					printf("\nLINKED LIST IS:");
					p=head;
					while(p!=NULL)
					{
						printf("\t%d->",p->data);
						p=p->next;	
					}
				case 3:// insert at specific positon
					newNode=(struct SLLNODE *)malloc(sizeof(struct SLLNODE));
					printf("\nEnter the node which u wnt to insert:");
					scanf("%d",&d);
					printf("\nEnter the position:");
					scanf("%d",&pos);
					newNode->data=d;
					newNode->next=NULL;
					if(head==NULL)
					{
						p=head;
						head=newNode;
					}
					else
					{
						p=head;
						loc=1;
						while(loc!=pos && p!=NULL)
						{
							q=p;
							p=p->next;
							loc=loc+1;
						}
						q->next=newNode;
						temp->next=p;
					}
					//display ll
					printf("\nLINKED LIST IS:");
					p=head;
					while(p!=NULL)
					{
						printf("\t%D->",p->data);
						p=p->next;
					}
				break;
				case 4: // delete at front
					if(head==NULL)
					{
						printf("\nLinked list empty");
					}
					else
					{
						temp=head;
						head=temp->next;
						free(temp);
					}
					printf("\nLINKED LIST :");
					p=head;
					while(p!=NULL)
					{
						printf("\t%d->",p->data);
						p=p->next;
					}
				break;
				case 5: 	// delete at end...
					if(head==NULL)
					{
						printf("\nLInked list is empty");	
					}
					else if(head->next==NULL)
					{
						temp=head;
						head=NULL;
						free(temp);	
					}
					else
					{
						temp=head;
						while(temp->next!=NULL)
						{
							q=temp;
							temp=temp->next;	
						}
						q->next=NULL;
						free(temp);	
					}
					printf("\nLINKD LIST IS:");
					p=head;
					while(p!=NULL)
					{
						printf("\t%d->",p->data);
						p=p->next;	
					}
					break;
				case 6:	//delete at specific loaction
					printf("\nEnter the loaction of node which u want to delete:");
					scanf("%d",&loc);
					if(head==NULL)
					{
						printf("\nLinked List is Empty...");	
					}
					else
					{
						temp=head;
						for(i=1;i<loc;i++)
						{
							p=temp;
							temp=temp->next;	
						}
						p->next=temp->next;
						free(temp);	
					}
					printf("\nLINKED LIST IS:");
					p=head;
					while(p!=NULL)
					{
						printf("\t%d->",p->data);
						p=p->next;	
					}
					break;	
				case 7:	// SEARCH THE NODE
					printf("\n Enter the node u want to search :: ");
					scanf("%d",&key);
					q=head;
					while(q!=NULL)
					{
						if(q->data==key)
						{
							printf("\n Node is found !!!");
							break;
						}
						q->next=q;  // continues with searching.
					}
					if(q==NULL)
					{
						printf("\n Node is not found.");
					}
					break;		
			}
			printf("\nDo u want to continue:1.YES/2.NO");
			scanf("%d",&ch);
		}while(ch!=2);
	return 0;
}
