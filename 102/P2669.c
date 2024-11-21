#include<stdio.h>
int main(void)
{
    int k;
    scanf("%d",&k);

    int sum = 0;//金币总数
    int temp = 1;//当天金币个数

    while(k>=temp)
    {
        sum += temp*temp;
        k -= temp;
        temp++;
    }

    sum += k*temp;//剩余天数*每天金币数目

    printf("%d",sum);
}