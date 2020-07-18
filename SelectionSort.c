
#include<stdio.h>
#include<conio.h>
int removex(int arr[],int small,int n)
{
    int i=0;
    for(;i<n;i++)
        if(arr[i]==small)  //searching that no to delete
            break;
    for(;i<n-1;i++)
        arr[i]=arr[i+1]; //delete by overloading no
    return n-1;
}
void selectSort(int arr[],int sort[],int n)
{
    int j=0,k=0,small;
    while(n!=0)
    {
        small=arr[0];
        for(j=0;j<n;j++)
            if(arr[j]<small)
                small=arr[j]; //finding smallest no
        sort[k++]=small;
        n=removex(arr,small,n);  //removing that from list as we included that no into sorted list
    }
}
void main()
{
    int arr[10],arr2[10],i,n;
    clrscr();
    printf("Enter how many elements");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    selectSort(arr,arr2,n);
    printf("sorted list is\n");
    for(i=0;i<n;i++)
        printf("%d\n",arr2[i]);

    getch();
}
/*#include<stdio.h>
main()
{
       int i,j,n=7,a[]={1,2,5,3,8,9,5},key;
       for(j=1;j<n;j++)
       {
                       key=a[j];    //a[j] is the new element to be added to the sorted
                                    //sequence
                       i=j-1;
                       while(i>=0 && key<a[i]) //traverse through the sorted sequence
                       {a[i+1]=a[i];i--;}      //until the place of key is found
                       a[i+1]=key;
       }
       for (j=0;j<n;j++)
       printf("%d",a[j]);
       */
