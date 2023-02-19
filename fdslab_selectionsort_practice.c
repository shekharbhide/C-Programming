#include <stdio.h>
int main(){
	int a[100],i,n,j;
	int temp;
	printf("How many no. do you want insert\n");
	scanf("%d",&n);
	printf("Enter an elements of list \n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	print("The list is \n");
	for (i=0;i<n;i++){
		printf("\n %d",&a[i]);
	}
	
	
	return 0;
}
