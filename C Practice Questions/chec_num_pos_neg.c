#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	if(n==0)
	{
		printf("\nNumber is zero!!!");
	}
	else if(n>0)
	{
		printf("\nNumber is Positive!!!");
		
	}
	else
	{
		printf("\nNumber is Negative!!");
	}
	return 0;
}
