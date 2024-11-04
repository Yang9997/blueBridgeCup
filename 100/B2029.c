#include<stdio.h>
#define PI 3.14
int main(void)
{
    int h;
    int r;
    scanf("%d",&h);
    scanf("%d",&r);

    double temp = 20/(h*PI*r*r/1000);
    int n = temp + 1;
    
    printf("%d",n);

    return 0;
}