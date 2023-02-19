#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],r,c,i,j,r1,c1,d[10][10];
	
	printf("enter the rows and coloms of 1st mat :\n");
	printf("row: ");
	scanf("%d",&r);
	printf("col: ");
	scanf("%d",&c);
	
	printf("enter the elements of 1st matrix : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		scanf("%d",&a[i][j]);
		
	}
	printf("matrix:\n ");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		printf("\t%d ",a[i][j]);
		
	
	printf("\n");
	}
	
	printf("enter the rows and coloms of 2nd mat :\n");
	printf("row: ");
	scanf("%d",&r1);
	printf("col: ");
	scanf("%d",&c1);
	printf("enter the elements of 2nd matrix : \n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		scanf("%d",&b[i][j]);
		
	}
	printf("matrix:\n ");
	
	
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		printf("\t%d ",b[i][j]);
		
	
	printf("\n");
	}
	printf("\nAddition is:\n");

	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			d[i][j]=a[i][j]+b[i][j];
			printf("\t%d ",d[i][j]);
		
		
		}
	
	
	printf("\n");
	}
	return 0;
	
}
