#include <stdio.h>
#include <conio.h>
void sum_all(void)
{
    int n,sum;
    sum=0;
    for(n=0;n<=100;n++)

        sum +=n;

    printf("\n sum of all is %d",sum);


}
void main(void)
{
  clrscr();
  sum_all();
 // return 0;

}
