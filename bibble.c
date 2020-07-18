#include <stdio.h>
void bubble_sort(int arr[],int n)
{
    int n,i,j,temp;
    int arr[5];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j])
            {
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
    int main()
    {
int n,arr,j;

    for(i=0;i<n;i++)
    {
        printf("%d",arr[j]);

    }
    return 0;
}
