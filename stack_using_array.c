/*
Name-Bhide Shekhar Vishnu
Roll No.06
Batch - S1
Title:: C program to demonstarate the stack for push, pop, display
*/
#include<stdio.h>
int main()
{
 	int a[15],top=-1,n,ch,data,i; //Declare array & variable
 	printf("\n Enter the size on stack::");
 	scanf("%d",&n); //Get size of array
 
 	do
	{
 		printf("\n\nEnter the operation no. you want to perform::");
 		printf("\n\t1.Push \t2.Display \t3.Pop"); //Operation want to perform
 		printf("\nEnter the choice:");
 		scanf("%d",&ch);
 		switch(ch)
 		{
 			case 1: //Push
 				if(top==n-1) //checking condition for full stack
 				{
 					printf("\n Stack is FULL!!");
 				}
 				else
 				{
 					printf("Enter the value on stack::"); //Inserting data in stack
 					scanf("%d",&data);
 					top++;
 					a[top]=data;
 					printf("\nThe %d element inserted in stack",data);
 				}
 			break;
 
 			case 2: //Display
 				if(top>=0)
				{
 					printf("Display Stack element :"); //Display the entire stack
 					for(i=0;i<=top;i++)
 					{
 						printf("\n%d",a[i]);
 					}
 				}
 				else
 				{
 					printf("\nEmpty");
 				}
 			break;
 
 			case 3: //Pop
 				if(top==-1) //Checking the empty stack
 				{
 					printf("\nStack EMPTY!!");
 				}
 				else
 				{
 					data=a[top]; //Delecting the data from stack
					printf("\nThe %d element delected from stack",data);
 					top--;
 				}
 				printf("\nDisplay Stack element :"); //Displaying required stack
 				for(i=0;i<=top;i++)
 				{
 					printf("\t%d",a[i]);
 				}
 				break;
 
 		}
 
 	}while(ch!=3);
 
 return 0;
}

