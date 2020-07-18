#include<stdio.h>
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


    int n;
    printf("Enter the number of element of array");
    scanf("%d",&n);
    int A[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    int key;
    printf("which number u want to search for:?");
    scanf("%d",&key);

    int index = binary_search(A,n,key);

    if(index== -1)
    {
        printf("the key was not found in the array");

    }
    else
    {
        printf("the key found at the array numbr %d",index);
    }

    return 0;
}

