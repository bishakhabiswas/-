/*#include <stdio.h>
int main()
{
    int i ,j,k;
    int arr[7]={1,2,3,5,5,6,7};
    printf("value:");
    scanf("%d",&k);


        if(==5)
            k=6;

   // for(j=0;j<7;j++)

        printf("%d ",arr[i]);


  return 0;
}*/
#include<stdio.h>
int main()
{
    int arr[10];
    int i,n,k,l;
    printf("Enter the array size:");
    scanf("%d",&n);
    printf("Enter the element of an array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("which number you want to replace:");
    scanf("%d",&k);
    printf("which number you replace by:");
    scanf("%d",l);

       if(arr[i]==k)
    {
        arr[i]=l;

   }
    printf("the replace data are:");
   // for(i=0;i<n;i++)
    //{
        printf("%d ",arr[i]);
   // }
    return 0;

}

