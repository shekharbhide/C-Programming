#include<stdio.h>
int main()
{
	int i,n;
	int isPrime=1; // this is declared as a prime
	printf("Enter the number to check whether is prime or not:");
	scanf("%d",&n);
	for(i=2;i*i<=n;i++)   // i is leass than root n
	{
		if(n%i==0)   // if number is divisible by i
		{
			isPrime=0;  //not prime ,this is composite
		}
	}
	if(isPrime)	// when isprime is 1 the we can say n is a prime
	{
		printf("%d is prime number!!!",n);
	}
	else
	{
		printf("%d is not a prime number!!!",n);
	}
	return 0;
}
