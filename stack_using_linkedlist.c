/*
Name-Bhide Shekhar Vishnu
Roll No.06
Batch - S1
Practical No.:: 09
Title :: Demonstrate Stack uisng Linked List
*/
#include<stdio.h> 
#include<stdlib.h> 
int main() 
{
	struct node
	{
		int data; 
		struct node *next; //Declare the node 
 	}
 	*top=NULL,*p,*n; 
	 int d,ch,ch1;
 	printf("\n Enter the data of Stack:"); 
	scanf("%d",&d); 
	// create the Node 
	n=(struct node *)malloc(sizeof(struct node)); //Allocation of memeory
	n->data=d; 
	n->next=NULL; 
	if(top==NULL) 
	{
 		top=n; 
	} 
	else
	{
 		n->next=top; 
		 top=n;
 	}
 	// Display the LL as Stack p=top;
	while(p!=NULL) 
	{
 		printf("\t %d--->", p->data); p=p->next;
 	} 
	do
	{
 		printf("\n\nWhich operation do you want to perform"); 
		printf("\n\t 1.PUSH 2.POP 3.DISPLAY"); 
		printf("\n Enter your choice"); 
		scanf("%d",&ch);
		switch(ch)
 		{
 			case 1: //push // Inserat at FRONT inLL
 				printf("\n Enter the Elements to push operation");
 				scanf("%d",&d);
 				n=(struct node *)malloc(sizeof(struct node));
 				n->data=d;
 				n->next=NULL;
 				if(top==NULL) //Checking whether stack is empty 
 				{
 					top=n;
 				}
 				else
				{
 					n->next=top; //Inserting the data in stack 
 					top=n;
 				}
 				printf("\n\t%d Node is Pushed into stack !!", top->data);
 			break;
 			case 2: // DELETE element at front
 			{
 				if(top==NULL) //Checking whether stack is empty
 				printf("\n STACK is EMPRY");
 				else
 				n=top;
 				top=n->next; //Delecting the data from stack
 				printf("\n\t %d Node is POPPED from stack!!", n->data);
			 	free(n);
 			}
 			break;
			case 3:
				printf("\n\t top--->");
 				p=top;
 				while(p!=NULL)
 				{
 					printf("\t %d--->", p->data);p=p->next; //Display the stack
				}		 
			break;
	
		}
		printf("\n Do you want to continue::");
 		printf("\n\t 1.YES \n\t 2.No"); 
		scanf("%d", &ch1);
 	}while(ch1!=2);
	return 0;
}

