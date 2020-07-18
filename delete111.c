#include <stdio.h>
int main()

{
  int x,i,j,size,position,arr[50],count=0;
printf("Enter the size of array:");
scanf("%d",&size);
printf("Enter the array element:");
for(i=0;i<size;i++)
{
    scanf("%d",&arr[i]);
}
printf("Enter the position:");
scanf("%d",&position);
for(i=position-1;i<size;i++)
{
    arr[i]=arr[i+1];
}

size--;
for(i=0;i,size;i++)
{
    printf("%d",arr[i]);
}
return 0;
}
