/*
Name-Bhide Shekhar Vishnu
Roll No.06
Batch - S1
Practical No.:: 10
Title :: Write C program to Demonstrate the Queue
*/
#include<stdio.h>
int main()
{
 	int a[10],size,ch,data,i; //Declare the array and variable
 	int front=-1,rear=-1; //Declare front and rear
 	printf("Enter the size of queue::");
	scanf("%d",&size); // Entering size of queue
 	do
	{
 		printf("\n enter the operation you want to perform:");
 		printf("\n\t1.ENQUEUE \n\t2.DISPLAY\n\t3.DEQUEUE"); //Operation want to perform on 
 		printf("\nENTER THE CHOICE::");
 		scanf("%d",&ch);
 		switch(ch)
 		{
 			case 1: //Enqueue 
 				if(rear==size-1) //Checking whether queue is full
 				{
 					printf("\nQueue is FULL!!");
 				}
 				else
 				{
 					printf("\nEnter the value on Queue::"); 
 					scanf("%d",&data); //Inserting data on the queue
 					rear=rear+1;;
 					a[rear]=data;
					printf("\n %d element inserted on Queue",data);
 				}
	 		break;
 
 			case 2: //Display
 				if(front==rear)
 				{
 					printf("\nQueue is Empty!!");
				}
				else
 				{
				 	printf("\nQueue is::");
 					for(i=front+1;i<=rear;i++)
 					{
 						printf("\t%d",a[i]); //Displaying the entire queue
 					}
 				}
 			break;
 
 			case 3: //Dequeue
 				if(front==rear) //Checking whether queue is empty
 				{
 					printf("\n Queue is EMPTY!!");
 				}
 				else
 				{
 					front=front+1;; //Delecting the data from the queue
 					printf("\n Deleted element is:%d",a[front]);
 
 				}
 				break;
			}
			printf("\nContinue 1.YES/2.NO");
			scanf("%d",&ch);
 	}while(ch!=2);
 return 0;
}



