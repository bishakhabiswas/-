#include <stdio.h>
int main()
{
    int arr[5],i,j,n,value;
    scanf(" %d",&n);
    for(i=0;i<5;i++)
    {
        scanf(" %d",&arr[i]);
    }
    printf("Enter any value:");
    scanf("%d\n",&value);
    for(i=0;i<5;i++)
    {
        if(arr[i]==4)
        {


            break;

        }
    }
    for(j=i;j<5;j++)
    {
        arr[j]=arr[j+1];
        printf("%d",arr[j]);
    }
    return 0;

}
