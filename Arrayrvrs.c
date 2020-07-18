#include<stdio.h>
int main()
{
    int arr[10],i,j,n;
    printf("The size of Array:");
    scanf("%d",&n);
    printf("The Array:");

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n/2;i++)
    {
            j = arr[i];
            arr[i]=arr[n-(i+1)];
                        arr[n-(i+1)]=j;


    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
