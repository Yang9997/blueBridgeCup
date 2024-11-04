#include<stdio.h>
#define FIRST 0.4463
#define SECOND 0.4663
#define THIRD 0.5663
int main(void)
{
    int n;
    scanf("%d",&n);

    if(n<=150)
    {
        printf("%.1f",FIRST*n);
    }
    else if(n<=400)
    {
        printf("%.1f",FIRST*150+(n-150)*SECOND);
    }
    else
    {
        printf("%.1f",FIRST*150+SECOND*(400-150)+THIRD*(n-400));
    }

    return 0;
}