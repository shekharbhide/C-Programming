//	Sum of First N Natural numbers
//	Formula for Sum of First  N natural numbers is : n(n+1)/2.

#include<stdio.h>
int main()
{
	int n;
	int sum=0;
	printf("\nEnter the first n natural numbers:");
	scanf("%d",&n);
	sum=n*(n+1)/2;	//	Formula for Sum of First  N natural numbers is : n(n+1)/2.
	printf("\nSum of first natural numbers:%d",sum);
	return 0;
}
