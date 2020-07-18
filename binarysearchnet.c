///Binary search
///12 23 30 32 38 42 50 60 65 70 85 90 100
/// mid = ( start +end )/ 2
/// start end mid key

#include <stdio.h>
int main()
{    int a[13] = {12,23,30,32,38,42,50,60,65,70,85,90,100};
      int i,start,end,mid,key;
      start = 0;
      end = 12;
      key = 33;
      do{
        mid = (int)((start+end)/2);
        printf("start:%d\tend:%d\tmid:%d\t key:%d\ta[mid]:%d\t",start,end,mid,key,a[mid]);
        if (a[mid]==key)
        {
            printf("\nfind at location %d\n",mid+1);
        break;
        }

      else if (a[mid]>key)
      {
          end = mid-1;
      }
      else {
           start = mid +1;
          }
      }

      while(start<=end);

        if(start>end)
      {


        printf(" \n Failed\n ");

      }
    return 0;
}
