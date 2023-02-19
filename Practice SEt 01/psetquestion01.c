/* pratic set q no.01  write a c program to alculate area of a rectangle */
#include <stdio.h>
int main(){
	int l,b;
	printf("What is the length of rectangle \n",l);
	scanf("%d",&l);
	printf("What is the bridth of rectangle \n",b);
	scanf("%d",&b);
	int area = l*b;
	printf("The area of the rectangle is %d",area);
	
	return 0;
}
