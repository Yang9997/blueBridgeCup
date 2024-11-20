#include<stdio.h>
int main(void)
{
    int a;
    scanf("%d",&a);
    int day = 1;

    while(a!=1){
        day++;
        a/=2;
    }

    printf("%d",day);
    return 0;
}