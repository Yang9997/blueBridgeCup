#include<stdio.h>
int main(void)
{
    int y;
    scanf("%d",&y);

    if(y%100==0)
    {
        if(y%400==0)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
    else
    {
        if(y%4==0)
        {
            printf("1");
        }
        else{
            printf("0");
        }
    }

    return 0;
}