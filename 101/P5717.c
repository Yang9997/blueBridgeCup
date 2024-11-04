#include<stdio.h>
int main(void)
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);

    if((a+b)<=c||(a+c)<=b||(c+b)<=a)//不是三角形:小于等于
        printf("Not triangle\n");
    else{
        if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
            printf("Right triangle\n");
        else if((a*a+b*b<c*c)||(a*a+c*c<b*b)||(b*b+c*c<a*a))
            printf("Obtuse triangle\n");
        else
            printf("Acute triangle\n");
        
        if(a==b||b==c||c==a)
        {
            printf("Isosceles triangle\n");
            if((a==b)&&(a==c))
                printf("Equilateral triangle\n");
        }
    }

    return 0;
}