#include<stdio.h>
#include<stdlib.h>
int main()
{   srand(time(NULL));
    int i,j,key,left,right,mid,item;
    int n = 20;
    int a[100];

for(i=0;i<n;i++){
a[i]= rand()%200;


}

printf("\n");
for (i = 0; i <n; i++)
{
printf("%d ", a[i]);
}

    for(i=1;i<n;i++)
    {
        item = a[i];
        j = i-1;
        while(j>=0 && a[j]>item)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=item;
    }

printf("\nSorted list in ascending order:\n");
for (i = 0; i < n; i++)
{
printf("%d ", a[i]);
}


   left = 0;
   right = n-1;
   printf("\nEnter the key value:");
   scanf("%d",&key);


   while(left<=right)
   {
       mid=(left+right)/2;
       if(a[mid]==key)
           {
           // return mid;
           printf("\nThe key is found at index %d",mid);
           break;
           }
       if(a[mid]<key)
       {
           left = mid+1;
       }
       else {
        right = mid-1;
       }
   }
   if(right<left)
   {
       printf("\nThe key is not found");
   }
   return 0;

}

/*#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,j,key,left,right,mid,item;
int n = 20;
int a[100];
srand(time(NULL));

for(i=0;i<n;i++){
a[i]= rand()%200;


}

printf("\n");
for (i = 0; i <n; i++)
{
printf("%d ", a[i]);
}

for(i=1;i<n;i++)
{
item = a[i];
j = i-1;
while(j>=0 && a[j]>item)
{
a[j+1]=a[j];
j=j-1;
}
a[j+1]=item;
}

printf("\nSorted list in ascending order:\n");
for (i = 0; i < n; i++)
{
printf("%d ", a[i]);
}

left = 0;
right = n-1;
printf("\nEnter the key value:");
scanf("%d",&key);


while(left<=right)
{

mid=(left+right)/2;

if(a[mid]==key)
{
// return mid;
printf("\nThe key is found at index %d",mid);
break;
}
if(a[mid]<key)
{
left = mid+1;

}
else
{
right = mid-1;

}
}
if(right<left)
{
printf("\nkey not found");
}

return 0;

}
*/
