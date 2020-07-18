#include<stdio.h>
#include<conio.h>
int main(void)
{
    int x,*ptr,a[5]={10,20,30,40,50};
   // clrscr();
    ptr = a;
    x = *ptr++;
    printf("ptr = %x   x=%d\n",ptr,x);
    x=*++ptr;
        printf("ptr = %x   x=%d\n",ptr,x);
   x= ++*ptr;
       printf("ptr = %x   x=%d\n",ptr,x);
       printf("ptr=%x   a[2] = %d\n",&a[2],a[2]);
       getch();
      // return 0;

}
