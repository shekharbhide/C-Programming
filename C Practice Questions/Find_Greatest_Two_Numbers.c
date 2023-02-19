#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter value of a:");
	scanf("%d",&a);
	printf("\nEnter Value of b:");
	scanf("%d",&b);
	
	if(a>b)
	{
		printf("\na=%d is Greater",a);
	}
	else if(b>a)
	{
		printf("\nb=%d is Greater",b);
	}
	else
	{
		printf("\nBoth a and b are equal,%d=%d",a,b);
	}
	return 0;
}
