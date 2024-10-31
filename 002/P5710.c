#include<stdio.h>
int main(void)
{
    int num;

    scanf("%d",&num);

    int a,b,c,d;

    if((num%2==0)&&((num>4)&&(num<=12)))
        a = 1;
    else
        a = 0;

    if(num%2==0 || (num>4) && (num<=12))
        b = 1;
    else
        b = 0;

    if((a == 0) && (b ==1))
        c = 1;
    else
        c = 0;
    
    if(b == 1)
        d = 0;
    else 
        d = 1;

    printf("%d %d %d %d",a,b,c,d);

    return 0;
}