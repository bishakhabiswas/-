#include <stdio.h>
#include<stdlib.h>

int main()
{
int c, low, high, middle, search;
int n=20, i, j, temp;
int arr[64];

for(i=0;i<20;i++){
arr[i]= rand()%200;


}

printf("\n");
for (i = 0; i <= n - 1; i++)
{
printf("%d ", arr[i]);
}

for (i = 1 ; i <= n - 1; i++)
{
j = i;
while ( j > 0 && arr[j-1] > arr[j])
{
temp = arr[j];
arr[j] = arr[j-1];
arr[j-1] = temp;
j--;
}
}
printf("\nSorted list in ascending order:\n");
for (i = 0; i <= n - 1; i++)
{
printf("%d ", arr[i]);
}






printf("\nEnter the value to find:\n");
scanf("%d", &search);
low = 0;
high = n - 1;
middle = (low+high)/2;
while (low <= high) {
if (arr[middle] < search)
low = middle + 1;
else if (arr[middle] == search) {
printf("%d is present at index %d.\n", search, middle+1);
break;
}
else
high = middle - 1;
middle = (low + high)/2;
}
if (low > high)
printf("Not found! %d is not present in the list.\n", search);

return 0;

}
