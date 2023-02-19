/*
Name-Bhide Shekhar Vishnu
Roll No.06
Batch - S1
Practical No.:: 06
Title:: C program for sorting the numbers using quick sort

#include <stdio.h>
void quickSort(int a[], int left, int right); // Function declare
int main()
{
    int n, i, a[20]; // Declare variable
    printf("Enter how many elements you want to sort::");
    scanf("%d", &n); // Storing n elements
    printf("\nEnter the elements you want to sort::\t");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]); // Entering elements
    }
    printf("Enter numbers are::");
    for (i = 0; i < n; i++)
    {
        printf("\t%d", a[i]); // Displaying elements
    }
    quickSort(a, 0, n - 1);
    printf("\n Elements after sorting is::");
    for (i = 0; i < n; i++)
    {
        printf("\t%d", a[i]); // Displaying sorted numbers
    }
    return 0;
}
void quickSort(int a[], int left, int right)
{
    int i, j, pivot, temp; // declare variable
    if (left < right)
    {
        pivot = left;
        i = left;
        j = right; // Consider pivot element
        while (i < j)
        {
            while (a[i] <= a[pivot] && i < right) // finding number greater than
                pivot;
            i++;
            while (a[j] > a[pivot]) // finding number less than pivot
                j--;
            if (i < j) // swapping i&j
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        temp = a[pivot];
        a[pivot] = a[j];
        a[j] = temp;
        quickSort(a, left, j - 1);
        quickSort(a, j + 1, right);
    }
}
*/




#include <stdio.h>

void quicksort(int num[25], int first, int last);
int main()
{
    int i, n, num[25]; //variable declaration
    printf("\n----");
    printf("\nHow many elements are you going to enter\n");
    scanf("%d", &n);

    printf("  Enter %d elements: ", n); //taking element from user
    for (i = 0; i < n; i++)
        scanf("%d", &num[i]);

    quicksort(num, 0, n - 1); //function calling

    printf("\n---------");
    printf("\nOrder of Sorted elements: "); //display array of element
    for (i = 0; i < n; i++)
        printf(" \t%d ", num[i]);
    printf("\n-------");

    return 0;
}

void quicksort(int num[25], int first, int last) //function definition
{
    int i, j, pivot, temp;

    if (first < last)
    {
        pivot = first;
        i = first;
        j = last;

        while (i < j)
        {
            while (num[i] <= num[pivot] && i < last)
                i++;
            while (num[j] > num[pivot])
                j--;
            if (i < j)
            {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }

        temp = num[pivot];
        num[pivot] = num[j];
        num[j] = temp;
        quicksort(num, first, j - 1);
        quicksort(num, j + 1, last);
    }
}
