#include<stdio.h>
int main(void)
{
    int num;
    scanf("%d",&num);

    int t1 = 5*num;
    int t2 = 11+3*num;

    if(t1<t2)
        printf("Local");
    else
        printf("Luogu");
        
    return 0;
}