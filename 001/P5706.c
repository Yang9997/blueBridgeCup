#include<stdio.h>
int main(void)
{
    double t;
    int n;

    scanf("%lf",&t);
    scanf("%d",&n);

    printf("%.3lf\n%d",t/n,n*2);

    return 0;
}