/*#include <stdio.h>
int main()
{
    int i;
    int arr[10];

    for(i=0;i<9;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<9;i++)
    {
        if(arr[i]==4)
        {
        arr[i]=5;
          }
     }
      for(i=0;i<9;i++)

      {

        printf("%d ",arr[i]);
      }

    return 0;
}*/
#include <stdio.h>
int main()
{
int i,n,arr[5],value,num;
printf("Enter the array size:");
scanf("%d",&n);
printf("Enter the array element:");
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
printf("Enter the value");
scanf("%d",&value);
printf("Enter the number:");
scanf("%d",&num);
for(i=0;i<n;i++)
{
    if(arr[i]==value)
    {
        arr[i]=num;
    }
}
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;

}
