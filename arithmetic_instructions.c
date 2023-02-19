#include <stdio.h>
int main(){
	int a=4;
	int b=8;
	printf("The value of a+b is: %d\n",a+b);
	printf("The value of a-b is: %d\n",a-b);
     printf("The value of a*b is: %d\n",a*b);
	printf("The value of a/b is: %d\n",a/b);
	  
	int z;
	z=b*a; //legel
	//	b*a =z; // illegel	
	printf("The value of x is :  %d\n",z);
	
	printf("5 when divided by 2 leaves a remainder of %d\n",5%2);
	return 0;
}
