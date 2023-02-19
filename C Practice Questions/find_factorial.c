#include<stdio.h>
int main()
{
	int i,n;
	int fact=1;
	
	printf("\nEnter the number to calculate factorial:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	fact=fact*i;
	
	printf("\nFactorial of the number %d is :%d",n,fact);
	return 0;
}
