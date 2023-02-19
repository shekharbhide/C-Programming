// Q no.03 program to convert celsius to fahrenheit 
#include <stdio.h>
int main(){
	float c;
	printf("enter temp in celsius \n",c);
	scanf("%f",&c);
	float far = (c *9 /5) +32;
	printf ("the value of this celsius temp in far is  %f",far);
	
	return 0;
}
