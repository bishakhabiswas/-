#include<stdio.h>
int main()
{
    int arr[50],i,j,brr[50],n,value,position;
    printf("Enter the array size:");
    scanf("%d",&n);
    printf("Enter the array element:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    j = n-1;
    while(j>=position-1)
    {
        arr[j+1]=arr[j];
        j--;

    }
    arr[position -1]=value;
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
