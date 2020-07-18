#include <stdio.h>
int main()
{
    int h,s,m;

    scanf("%d",&s);
    h = 0;
    m = 0;
    h = s/3600;
    s = s%3600;
    m = s/60;
    s = s%60;
    printf("%d:%d:%d\n",h,m,s);
    return 0;

}
