#include <stdio.h>
#include <math.h>
int main()
{
    double x1,x2,y1,y2,a,b,c,distance;
    scanf("%lf %lf",&x1,&x2);
    scanf("%lf %lf",&y1,&y2);
    a = (x2-x1)*(x2-x1);
    b = (y2-y1)*(y2-y1);
    c = a+b;
    distance = sqrt(c);
    printf("%.4lf\n",distance);
    return 0;
}
