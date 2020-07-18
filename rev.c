#include <stdio.h>
int main()
{
    int i,j=0;
    int arr2[11];

   int arr1[11] = {-1,1,3,5,7,9,11,13,15,17};
    for(i=9;i>=0;i--)
    {
        arr2[j]=arr1[i];
    }
    for(i=0;i<=9;i++)
    {
        arr1[i]=arr2[i];
        printf("%d",arr1[i]);

    }
    return 0;
}
