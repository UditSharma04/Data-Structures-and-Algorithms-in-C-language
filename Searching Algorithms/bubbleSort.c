#include <stdio.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void bubbleSort(int *A, int n)
{
    int temp;
    int isSorted = 0;
    for (int i = 0; i < n - 1; i++) // For number of pass
    {
        printf("Working on pass number %d\n", i + 1);  // For checking the pass no
        for (int j = 0; j < n - 1 - i; j++) // For comparison in each pass
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}

void bubbleSortAdaptive(int *A, int n)
{
    int temp;
    int isSorted = 0;
    for (int i = 0; i < n - 1; i++) // For number of pass
    {
        printf("Working on pass number %d\n", i + 1); // For checking the pass no
        isSorted = 1;
        for (int j = 0; j < n - 1 - i; j++) // For comparison in each pass
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                isSorted = 0;
            }
        }
        if (isSorted)
        {
            return;
        }
    }
}

int main()
{
    // int A[] = {12, 54, 65, 7, 23, 9};
    // int A[] = {1, 2, 5, 6, 12, 54, 625, 7, 23, 9, 987};
    int B1[] = {1, 2, 3, 4, 5, 6};
    int B2[] = {1, 2, 3, 4, 5, 6};
    int n1 = 11;
    int n2 = 6;

    // Sorting Array A
    // printf("Before Sorting : A[] = ");
    // printArray(A, n1); // Printing the array before sorting
    // bubbleSort(A, n1); // Function to sort the array
    // printf("After Sorting : A[] = ");
    // printArray(A, n1); // Printing the array before sorting

    // Difference Between Normal Sorting and Adaptive Sorting
    printf("Using Normal Bubble Sort\n\n");
    printf("Before Sorting : B1[] = ");
    printArray(B1, n2);
    bubbleSort(B1, n2);
    printf("After Sorting : B1[] = ");
    printArray(B1, n2);
    printf("\n\n---------------------------------\n\n");


    printf("Using Adaptive Bubble Sort\n\n");
    printf("Before Sorting : B2[] = ");
    printArray(B2, n2);
    bubbleSortAdaptive(B2, n2);
    printf("After Sorting : B2[] = ");
    printArray(B2, n2);
    return 0;
}
