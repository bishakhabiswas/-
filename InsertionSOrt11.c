#include<stdio.h>
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

int main()
{
    int n;

    scanf("%d",&n);
    int A[n];
    int i;
     for(i=0;i<n;i++)
     {
         scanf("%d",&A[i]);
     }
     Insertion_Sort(A,n);
     printf("The sorted array:");
     for(i=0;i<n;i++)
     {
         printf("%d",A[i]);
     }
     return 0;
}
