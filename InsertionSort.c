/*
#include <math.h>
#include <stdio.h>

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


int main()
{
    int arr[] = { 2,0,1,9,1,1,0,5,3,0,3,2 };
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);
    printArray(arr, n);

    return 0;
}*/
#include<stdio.h>
void InsertionSort(int a[], int n)
{int tmp;
int j;int p;
    for(p = 1; p < n; p++)
{
    tmp = a[p];
        j = j-1;
        while(j>=0 && A[j]>tmp)
        {
            A[j+1]=A[j];
            j=p-1;
        }
        A[j+1]=tmp;
    }
}
 
 
int main()
{
    int i, n, a[10];
    printf("Enter the number of elements :: ");
    scanf("%d",&n);
    printf("Enter the elements :: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    InsertionSort(a,n);
    printf("The sorted elements are ::  ");
    for(i = 0; i < n; i++)
        printf("%d  ",a[i]);
    printf("\n");
    return 0;
}
