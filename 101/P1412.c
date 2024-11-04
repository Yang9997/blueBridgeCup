#include<stdio.h>
int main(void)
{
    int day;//第n天
    int week;//n周

    scanf("%d%d",&day,&week);

    int a = week/7;//n周
    int b = week%7;//多出来
    int c = 0;

    for(;b>0;b--)
    {
        if((day+b)%7 == 0||(day+b)%7 == 1)
        {

        }
        else
            c+=250;  
    }

    c +=a*250*5;
    printf("%d",c);
    return 0;
}