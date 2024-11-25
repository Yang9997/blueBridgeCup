#include<stdio.h>
#include<math.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    float n1 = 1.0;
    float n2 = 1.0;

    while(n!=0)
    {
        n1*=(1+pow(5,0.5))/2;
        n2*=(1-pow(5,0.5))/2;
        n--;
    }

    float fn = (n1-n2)/pow(5,0.5);

    printf("%.2f",fn);
    return 0;
}