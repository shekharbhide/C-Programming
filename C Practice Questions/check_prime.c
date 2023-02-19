
#include<stdio.h>
int main()
{
	int n,i,div=0;
	
	printf("Enter the number to check prime or not:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			div++;
		}
	}
	if(div==2)
	{
		printf("\n%d is Prime Number",n);
	}
	else
	{
		printf("\n%d is Not Prime Number!!",n);
	}
	
	return 0;
	
}

