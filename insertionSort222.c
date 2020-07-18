#include<stdio.h>
void InsertionSort(int a[], int n)
{
    
int tmp;
int j;int p;
    for(p = 1; p < n; p++)
{
    tmp = a[p];
        j = p-1;
        while(j>=0 && A[j]>tmp)
        {
            A[j+1]=A[j];
            j=j-1;
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
