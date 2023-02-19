//C Program to find greatest of three numbers
#include<stdio.h>
int main()
{
	int num1,num2,num3;
	printf("Enter the 3 numbers randomly:");
	scanf("%d\t %d\t %d",&num1,&num2,&num3);
	if(num1>num2 && num1>num3)
	{
		printf("\n Num1  %d is Greatest",num1);
	}
	else if(num2>num1 && num2>num3)
	{
		printf("\n num2 %d is Greatest",num2);
	}
	else
	{
		printf("\nNum3 %d is Greatest",num3);
	}
	return 0;
}
