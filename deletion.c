#include <stdio.h>
int main()

{
  int x,i,j,n,value,arr[50];
printf("Enter the size of array:");
scanf("%d",&n);
printf("Enter the array element:");
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
printf("Enter the value:");
scanf("%d",&value);
 for(i=0;i<n;i++)
  {
      if(value== arr[i])
      {
          for(j=i;j<n-1;j++)
          {
              arr[j]=arr[j+1];
          }
      }
  }
  for(i=0;i<n;i++)
  {
      printf("%d ",arr[i]);
  }
  return 0;

}
