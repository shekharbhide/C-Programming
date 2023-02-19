// Q no.02 calculate the area of circle  &
// mdify the same program to calculate volume of cylinder given its radius and hieght
#include <stdio.h>
int main(){
	int r;
	printf("What is the radius of the circle \n",r);
	scanf("%d",&r); 
	float pi=3.14;

	printf("The area of the circle is %f \n",pi*r*r);
	
	int h;
	printf("What is the height of cylinder \n",h);
	scanf("%d",&h);
	printf("Volume of the cylinder is %f",pi*r*r*h);
	return 0;
}
