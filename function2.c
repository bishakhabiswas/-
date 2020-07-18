#include<stdio.h>
#include<conio.h>
void square_num(void)
{
    int i,num;
    printf("\n\nNumber Square\n");
    for(num=1;num<=10;num++)
        printf("%3d %3d\n",num,num*num);
}
void cube_num(void)
{
    int i,num;
    printf("\n\nNumber Cube\n:");
    for(num=1;num<=10;num++)
        printf("%3d %4d\n",num,num*num*num);
}
void main(void)
{
    clrscr();
    printf("\n\n Press any key to see square:");
    getch();
    square_num();
     printf("\n\n Press any key to see cube:");
     getch();
     cube_num();
     getch();


}
