/*  Q N0 04 write a program to calculat simple intrest for a set of values 
representing principle,no.of years and rate of intrest */
/*
#include <stdio.h>
int main(){
	int principal=100,rate=4,years=1;
	int simpleIntrest=(principal *rate *years)/100;
	printf("The value of simple Intrest is %d",simpleIntrest);
	return 0;
}
*/
#include <stdio.h>
int main(){
	int p,r,y;
	printf("Enter the principal \n",p);
	scanf("%d",&p);
	printf("Enter the rate \n",r);
	scanf("%d",&r);
	printf("Enter the years \n",y);
	scanf("%d",&y);
	int simpleIntrest=(p *r *y )/100;
	printf("The value of simple Intrest is %d",simpleIntrest);
	return 0;
}
