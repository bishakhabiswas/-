#include<stdio.h>
#include<stdlib.h>
#include<time.h>
Random()
{
     srand(time(NULL));

for(int i=0;i<15 ;i++)
{
    printf("%d  ",rand()%20);
}
}
void Insertion_Sort(int A[],int n)
{
    int i;
    int j;int item;
    for(i=1;i<n;i++)
    {
        item = A[i];
        j = i-1;
        while(j>=0 && A[j]>item)
        {
            A[j+1]=A[j];
            j=j-1;
        }
        A[j+1]=item;
    }
}
binary_search(int A[],int n,int key)
{   int left ,right,mid;
   left = 0;
   right = n-1;

   while(left<=right)
   {
       mid=(left+right)/2;
       if(A[mid]==key)
       {
           return mid;
       }
       if(A[mid]<key)
       {
           left = mid+1;
       }
       else {
        right = mid-1;
       }
   }
}
int main()

{
     int A[15]; int i;

     A[15]=Random();
    for(i=0;i<15;i++)
    {
        printf("%d", A[i]);

    }


    return 0;
}
