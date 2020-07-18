#include <stdio.h>
#define MAX 20
int main()
{
    int arr[MAX];int no;

    printf("PLEASE ENTER THE CURRENT SIZE OF THE ARRAY\n");
    scanf("%d",&no);

    int i;
    printf("PLEASE ENTER THE ELEMENTS OF THE ARRAY\n");
    for(i=0;i<no;i++)
        scanf("%d",&arr[i]);  /*reading the elements*/

    /* sorting begins*/
    int j,k,l;
    int temp;
    int flag=0;

    for(k=0;k<no-1;k++)
        {
        flag=0;
        j=k;
        for(i=0;i<no-j-1;i++)  /* not going to the part that has been sorted*/
        {
            if(arr[i]>arr[i+1])
            {
                flag=1;
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
            else
                continue;/* not necessary*/
        }
        if(flag==0)  /*implies that the array is alraedy sorted*/
            break;
    }
    printf("THE SORTED LIST:\n\n");
    for(i=0;i<no;i++)
        printf(" %d\n" ,arr[i]);
}
