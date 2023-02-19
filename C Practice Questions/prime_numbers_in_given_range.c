#include<stdio.h>
int isPrime(int n)
{
	int i;
	for(i=2;i*i<=n;i++)   //checking numbers from 2 to root n
	{
		if(n%i==0)
		{
			return 0; // if it is not prime then return 0
		}
	}
	return 1;	//when n is prime.....
}
int main()
{
	int n1,n2,i;
	printf("Enter the first number:");
	scanf("%d",&n1);
	printf("Enter the second number:");
	scanf("%d",&n2);
	
	printf("\nThe prime Numbers between %d and %d are:",n1,n2); 
	for(i=n1;i<=n2;i++)  //range from n1 to n2
	{
		if(isPrime(i))   //print the prime numbers betwwenn n1 and n2
		{
			printf("%d ",i);
		}
	}
	  
	return 0;
}
