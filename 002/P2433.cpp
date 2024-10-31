#include<stdio.h>
#include<math.h>
#include<iostream>
#define PI 3.141593
using namespace std;
int main(void)
{
    int n;
    scanf("%d",&n);

    if(n==1)
    {
        printf("I love Luogu!");
    }
    else if(n==2)
    {
        printf("6 4");
    }
    else if(n==3)
    {
        printf("3\n12 \n2");
    }
    else if(n==4)
    {
        printf("%.3lf",500.0/3);
    }
    else if(n==5)
    {
        printf("%d",(220+260)/(12+20));   
    }
    else if(n==6)
    {
        cout<<sqrt(6*6+9*9)<<endl;
    }
    else if(n==7)
    {
        printf("110\n90\n0");
    }
    else if(n==8)
    {
        cout<<2*5*PI<<endl;
        cout<<5*5*PI<<endl;
        // 计算顺序：从左到右，4/3中4和3两个数字都会被认为是整型，所以结果也是整型1，要4->4.0
        cout<<4.0/3*PI*5*5*5;
    }
    else if(n==9)
    {
        for(int a=1;a;a++){
            if((((a/2-1)/2-1)/2-1)==1)
            {
                printf("%d",a);
                break;
            }
        }
    }
    else if(n == 10)
    {
        // x+30y = 30*8
        // x+6y = 6*10
        printf("%d",(10+8)/2);
    }
    else if(n ==11)
    {
        // 同8
        cout<<100.0/3;
    }
    else if(n==12)
    {
        int a = 'M'-'A'+1;
        char b = 'A'+17;
        printf("%d\n%c",a,b);
    }
    else if(n==13)
    {
        double a = sqrt(4/3*PI*3*3*3+4/3*PI*4*4*4);
        int b = a;
        printf("%d",b);
    }
    else
    {
        for(int a = 10;;a++)
        {
            if((110-(a-10))*a>=3500)
            {
                printf("%d",a);
                break;
            }
        }
    }

    return 0;

}