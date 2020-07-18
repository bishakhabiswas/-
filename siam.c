#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

int array[20];

srand(time(0));

for (int i = 0; i < 20; i++)
{
array[i] = rand()%200;
}

for (int i = 0; i < 20; i++)
{
int value = array[i];
int j = i;

while (j > 0 && array[j - 1] > value)
{
array[j] = array[j - 1];
j--;
}
array[j] = value;
}


printf(" Random Digits:\n");
for (int i = 0; i < 20; i++)
{


printf("%d ", array[i]);
}

printf("\n");



int user_input;
printf("\n Please Enter The Search Key: ");
scanf("%d", &user_input);

int low = 0, high = 20 - 1;
int size = 20;
int x = user_input;

while (low <= high)
{

int mid = (low + high) / 2;

if (x == array[mid])
{
int position=mid;

printf(" Found at index : %d",position );
return 0;
}
else if (x < array[mid])
high = mid - 1;

else
low = mid + 1;
}

printf(" Whoops! Not Found");

printf(" Random Digits:\n");
for (int i = 0; i < 20; i++)
{

if(i%4==0){
printf("\n");

}
printf("\t%d ", array[i]);
}

printf("\n");

return 0;
}

