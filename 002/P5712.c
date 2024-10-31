#include<stdio.h>
int main(void)
{
    int num;
    scanf("%d",&num);

    printf("Today, I ate %d ",num);
    if(num ==0||num==1)
    {
        printf("apple.",num);
    }
    else{
        printf("apples.",num);
    }

    return 0;
}