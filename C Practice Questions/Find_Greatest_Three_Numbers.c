#include<stdio.h>
int main()
{
	int a,b,c;
	printf("\nEnter the value of a=");
	scanf("%d",&a);
	printf("\nEntr the value of b=");
	scanf("%d",&b);
	printf("\nEnter the value of c=");
	scanf("%d",&c);
	
	if(a>b && a>c)
	{
		printf("\na=%d is Greatest from three numbers",a);
	}
	else if(b>a && b>c)
	{
		printf("\nb=%d is Greatest from three numbers",b);

	}
	else
	{
		printf("\nc=%d is Greatest from three numbers",c);
	}
	return 0;
}
