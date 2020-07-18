#include <stdio.h>
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
        if(arr[i]==5)
        {
        arr[i]=6;
          }
     }
      for(i=0;i<9;i++)

      {

        printf("%d",arr[i]);
      }

    return 0;
}
