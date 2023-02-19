#include<stdio.h>
int main(){   
 int a[100],i,n,j;
    int temp;
    printf("how many no. do you want insert\n");
    scanf("%d",&n);
    printf("enter an elements of list \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nList is\n");
    for(i=0; i<n; i++)
    {
        printf("\n%d",a[i]);
    }

     printf("List display by bubble sort\n");
        for(  i=0; i<n-1; i++)  
        {
            for( j=0; j<n-1-i; j++)
            {
                if(a[j]>a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
        for(i=0; i<n; i++)
        {
            printf("%d\t",a[i]);
        }

        return 0;
    }

