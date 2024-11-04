#include<stdio.h>
int main(void)
{
    int s;
    int v;

    scanf("%d",&s);
    scanf("%d",&v);

    int t = s/v; 
    if(v*t<s)// 不足则进一
    {
        t++;
    }
    t = t+10; //花费总分钟
    //printf("t = %d mins\n",t);
    int t1 = t/60; // 花费小时
    //printf("t1 = %d hours\n",t1);
    int t2 = t-t1*60; // 花费分钟
    //printf("t2 = %d mins\n",t2);


    if(t1<8)
    {
        if(t2 == 0)
        {
            printf("0%d:00",8-t1);
        }
        else if(t2>50)
        {
            printf("0%d:0%d",8-t1-1,60-t2);
        }
        else{
            printf("0%d:%d",8-t1-1,60-t2);
        }
    }
    else if((t1>=8)&&(t1<22))
    {
        if(t2 == 0)
        {
            printf("%d:00",32-t1);
        }
        else if(t2>50)
        {
            printf("%d:0%d",32-t1-1,60-t2);
        }
        else{
            printf("%d:%d",32-t1-1,60-t2);
        }
    }
    else
    {
        if(t2 == 0)
        {
            printf("0%d:00",32-t1);
        }
        else if(t2>50)
        {
            printf("0%d:0%d",32-t1-1,60-t2);
        }
        else{
            printf("0%d:%d",32-t1-1,60-t2);
        }
    }

    return 0;
}