#include<stdio.h>

int Linear_Search(int A[],int n,int key)
{   int i;

    for( i=0;i<n;i++)
      {
       if(A[i]==key)
    {
        return i;
    }
      }


        return -1 ;


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

    int index = Linear_Search(A,n,key);

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
