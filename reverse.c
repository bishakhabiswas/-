#include<stdio.h>
int main()
{
    int a1[10],a2[10],i,n,j=0;
    printf("Enter the array size:");
    scanf("%d",&n);
    printf("Enter the array element:");
    for(i=0;i< n;i++)
    {
        scanf("%d",&a1[i]);
    }
   // for(j=n-1,i=0;j>=0,i<n;j--,i++)
   for(i=n-1;i>=0;i--)
    {
        a2[j]=a1[i];
        j++;

    }
    for(i=0;i<n;i++)
    {
        a1[i]=a2[i];

    printf("%d ",a1[i]);
    }
    return 0;
}
