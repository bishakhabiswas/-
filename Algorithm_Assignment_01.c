#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{ srand(time(NULL));
int i;
for(i=0;i<10;i++)
{
    printf("%d ",rand()%100);
}
int A[100];
A[100]= rand()%100;
for(i=0;i<9;i++)
{
    printf("%d ",A[i]);
}
    return 0;
}
