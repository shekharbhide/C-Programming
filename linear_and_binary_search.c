#include<stdio.h>
int main()
{
	int a[30],i,j,n,key,ch,ch1; //declare variable & array
	int temp,low,high,mid;
	do
	{
		printf("How many elements you want to store::\t");
		scanf("%d",&n); // storing n elements
		printf("\nEnter the Numbers::");
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		printf("Entered numbers are::");
		for(i=0;i<n;i++)
		{
 			printf("\t %d",a[i]);
		}
		printf("\nSelect one technique you want to perform on given elements");
		printf("\n\t1.Linear search \n\t2.Binary Search");
		printf("\nEnter your choice::\t");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: //Linear searching
				printf("Enter the element to search::");
				scanf("%d",&key);
				{
					for(i=0;i<n;i++)
					{
						if(key==a[i]) //Finding the element in array
						{
							printf("Element Found.\n Number is present at %d ",i++);
						}
					}
					if(key!=a[i])
 					{
 						printf("Element not Found!!");
 					}
				}
			break;
			case 2: //Binary searching
				for(i=0;i<n;i++)
				{
					for(j=0;j<(n-i-1);j++)
					{
						if(a[j]>a[j+1]) //Sorting the element in ascending order
						{
							temp=a[j];
							a[j]=a[j+1];
							a[j+1]=temp;
						}
					}
				}
			printf("sorted elements:\n"); //Displaying sorted elements
			for(i=0;i<n;i++)
			{
				printf("\n%d",a[i] );
			}
			printf("\n enter the elements to be searched:");
			scanf("%d",&key);
			/* BINARY SEARCH BEGINS */
			low=1;
			high=n;
			do
			{
				mid=(low+high) /2; //finding middle element
				if (key < a[mid])
				high=mid-1;
				else if (key > a[mid])
				low=mid + 1;
			}
			while(key != a[mid] && low<=high);
			if(key == a[mid]) //searching the element in array
			{	
				printf("element is present. at %d \n",(mid+1));
			}
			else
			{
				printf("element is not present. \n");
			}
		break;
 		}
 		printf("\nDo you want continue:\n1.YES\n2.NO");
		scanf("%d",&ch1);
	}while(ch1!=2);
return 0;
}

