#include<stdio.h>
main()
{
       int i,j,n=12,a[]={2,0,1,9,1,1,0,5,3,0,3,2},key;
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
       printf("% d ",a[j]);
}
