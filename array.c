#include <stdio.h>
int main()
{   int index,value,true;
    int arr[]={1,2,3};
    printf("%d\n",arr[0]);
    arr[0]=10;
    printf("%d",arr[0]);
    while(true)
    {
        scanf("%d %d ",&index,&value);
        arr[index]=value;}

    printf("%d",arr[index]);

    return 0;

}
