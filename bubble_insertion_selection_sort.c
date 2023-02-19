/*
Name-Bhide Shekhar Vishnu
Roll No.06
Batch - S1
Title:: C program for sorting the numbers using Bubble,selection, insertion sort
*/
#include <stdio.h>
int main()
{
    int a[30];                  // Declare array
    int i, j, k, n, ch, ch1, t; // Declare Variable
    do
    {
        printf("How many elements u want to sort::\t");
        scanf("%d", &n); // Storing n elements
        printf("\nEnter the Numbers::");
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]); // Getting the numbers
        }
        printf("Entered numbers are::");
        for (i = 0; i < n; i++)
        {
            printf("\t %d", a[i]); // Displaying the numbers
        }
        printf("\nSelect one technique you want to perform on given elements");
        printf("\n\t1.BUBBLE SORT \n\t2.SELECTION SORT \n\t3.INSERTION SORT");
        printf("\nEnter your choice::\t");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1: // Bubble sorting
            for (i = 0; i < n - 1; i++)
            {
                for (j = 0; j < n - 1 - i; j++) // Swapping the elements in ascending order
                {
                    if (a[j] > a[j++])
                    {
                        t = a[j];
                        a[j] = a[j++];
                        a[j++] = t;
                    }
                }
            }
            printf("After using bubble sort, the sorted elements are arrange as::");
            for (i = 0; i < n; i++)
            {
                printf("\t%d", a[i]); // Display sorted elements
            }
            break;
        case 2: // Selection sorting
            for (i = 0; i < n - 1; i++)
            {
                k = i;
                for (j = i + 1; j < n; j++) // Swapping the elements
                {
                    if (a[j] < a[k])
                    {
                        k = j;
                    }
                }
                t = a[i];
                a[i] = a[k];
                a[k] = t;
            }
            printf("\nAfter using selection sort, the sorted elements are arrange as::");
            for (i = 0; i < n; i++)
            {
                printf("\t%d", a[i]); // Display sorted elements
            }
            break;
        case 3: // Insertion sorting
            i = 1;
            while (i < n)
            {
                t = a[i];
                j = i - 1;
                while (j >= 0, a[j] > t)
                {
                    a[j + 1] = a[j]; // Swapping the elements
                    j = j - 1;
                }
                a[j + 1] = t;
                i = i + 1;
            }
            printf("After using insertion sort, the sorted elements are arrange as::");
            for (i = 0; i < n; i++)
            {
                printf("\t%d", a[i]); // Display sorted elements
            }
            break;
        }
        printf("\nDo you want continue:\n1.YES\n2.NO");
        scanf("%d", &ch1);
    } while (ch1 != 2);
    return 0;
}

