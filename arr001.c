/*#include<stdio.h>

int main()
{
    int size;
    printf("enter the array size:");
    scanf("%d",&size);
    int i;
    int a[100];
    printf("enter the array element:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    int index;
    printf("enter the index u want to delete:");
    scanf("%d",&index);


int    j = index;
    while(j<size-1)
    {
        a[j] = a[j+1];
        j++ ;
    }
    size = size - 1 ;
    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}*/
/*#include<stdio.h>

int main()
{
    int size;
    printf("enter the array size:");
    scanf("%d",&size);
    int i;
    int a[100];
    printf("enter the array element:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    int value;
    printf("enter the value u want to insert:");
    scanf("%d",&value);
    int index;
      printf("enter the index u want to insert it in:");
    scanf("%d",&index);

int    j = index;
    while(j<=size-1)
    {
        a[j+1] = a[j];
        j++ ;

    index = value;
    }
    size = size + 1 ;
    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
*/
#include<stdio.h>
void Delete(int index)
{ int j,size;
int a[100];

 j = index;
    while(j<size-1)
    {
        a[j] = a[j+1];
        j++ ;
    }
    size = size - 1 ;
}
int main()
{int size;
    printf("enter the array size:");
    scanf("%d",&size);
    int i;
    int a[100];
    printf("enter the array element:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }




    Delete(4);

    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

