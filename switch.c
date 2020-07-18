#include <stdio.h>
#include <conio.h>
int main()
{
    char ch;
    clrscr();
    printf("\nEnter a character:");
    ch = getch();
    switch(ch)
    {
    case 'a':
    case'e':
        case'i':
        case'o':
        case'u':
            printf("\n\n\n\a your choice is vowel");
            break;
        default:
            printf("\n\n\n\a your choice is not vowel");
            break;
    }
    getch();
    return 0;


    }

