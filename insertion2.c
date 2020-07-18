#include <stdio.h>
int main()
{
    int n,position,arr[100],i,num;
    printf("Enter the size of an array:");
    scanf("%d",&n);
    printf("Enter the element of an array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

        printf("Enter the position:");
       scanf("%d",&position);

     printf("Enter the number to be inserted:");
     scanf("%d",&num);

    for(i=n;i>=position;i--)
    {
        arr[i] = arr[i-1];
    }
    arr[position-1] = num;
    n++;
    printf("Array after inserting new element:");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);

    }


return 0;

}
/*#include <stdio.h>

int main() {

    int n, pos, arr[100], i, num;

    printf("Enter the size of an array:");
    scanf( "%d", &n);

    printf( "Enter the element of an array:");

    //Input value of an array
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    //Position to insert a new element

    printf("Enter the position:");
    scanf("%d", &pos);

    // Number to be inserted in an array

    printf("Enter number to be inserted:\n");
    scanf("%d", &num);

    for( i = n; i >= pos; i--) {
        arr[i] = arr[i-1];
    }

    arr[pos-1] = num;

    //Increment the size of an array
    n++;


    printf("Array after inserting new element");

    //Array after inserting new element
    for( i = 0; i < n; i++) {
        printf(" %d ", arr[i]);
    }
    return 0;
}*/
