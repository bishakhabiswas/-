#include<stdio.h>
#include<stdlib.h>
#include<time.h>
Rand()
{
    srand(time(NULL));
    int i,n=20;
    int a[50];
    for(i=0;i<n;i++)
    {
        printf("%d ",rand()%100);
    }
}
int main()
{   int n;
     int a[n];
int i;
    Rand();
    scanf("\n%d",&n);
    a[n]=Rand();
    for(i=0;i<n;i++)
    {
        printf("\n%d ",a[i]);
    }
    return 0;
}
