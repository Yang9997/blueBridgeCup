#include<stdio.h>
int main(void)
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);

    int temp1 = a*60+b;
    int temp2 = c*60+d;
    int t = temp2-temp1;

    int m = t%60;
    int h = t/60;

    printf("%d %d",h,m);

    return 0;
}