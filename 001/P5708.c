#include<stdio.h>
#include<math.h>
int main(void)
{
    double a,b,c;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);

    double p =(a+b+c)/2;
    double s = sqrt(p*(p-a)*(p-b)*(p-c));

    printf("%.1lf",s);

    return 0;
}