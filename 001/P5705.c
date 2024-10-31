#include<stdio.h>
int main(void)
{
    double a;
    scanf("%lf",&a);
    double b = a*10;
    int c = b;
    int a1,a2,a3,a4;
    a1 = c%10;
    a2=(c-a1)/10%10;
    a4 = c/1000;
    a3=c/100-a4*10;
    double d = a1+0.1*a2+0.01*a3+0.001*a4;
    // %g输出flout，double可用于去掉末尾的0
    printf("%g",d);

    return 0;
}