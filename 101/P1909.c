#include<stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);

    int n1, n2, n3;//多少支
    int p1, p2, p3;//多少钱
    scanf("%d%d", &n1, &p1);
    scanf("%d%d", &n2, &p2);
    scanf("%d%d", &n3, &p3);

    int pr1;
    if(n%n1!=0)
        pr1 = (n/n1+1)*p1;
    else
        pr1 = n/n1*p1;
        
    int pr2;
    if(n%n2!=0)
        pr2 = (n/n2+1)*p2;
    else
        pr2 = n/n2*p2;
    
    int pr3;
    if(n%n3!=0)
        pr3 = (n/n3+1)*p3;
    else
        pr3 = n/n3*p3;

    if(pr1<pr2)
    {
        if(pr1<pr3)
            printf("%d",pr1);
        else
            printf("%d",pr3);
    }
    else//(pr2<pr1)
    {
        if(pr2<pr3)
            printf("%d",pr2);
        else
            printf("%d",pr3);
    }

    return 0;
}