#include <stdio.h>
int main()
{
    int i,index,avg,sum =0;
    int arr[5] ={2,3,4,5,6};
    for(i=0;i<5;i++)
    {
       // scanf("%d",&index);
       sum = sum +arr[i];
    }
    avg = sum;
    printf("%d",avg);

  //  printf("%d ",arr[index]);
  //  }
    return 0;
}

