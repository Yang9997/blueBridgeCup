#include<stdio.h>
int main(void)
{
    int m;
    int t;
    int s;

    scanf("%d%d%d",&m,&t,&s);

    int temp = s/t;

    if(t == 0)// 光速食用
    {
        printf("0");
    }
    else if(temp >= m)// 全吃了
    {
        printf("0");
    }
    else if((temp == (m-1))&&(temp*t<s))// 最后一个吃剩了点
    {
        printf("0");
    }
    else if (temp*t<s)// 有一整个没吃完
    {
        printf("%d",m-1-temp);
    }
    else// 吃的都是整数
    {
        printf("%d",m-temp);
    }

    return 0;
}