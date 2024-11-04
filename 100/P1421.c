#include<stdio.h>
int main(void)
{
    int yuan;
    int jiao;
    scanf("%d%d",&yuan,&jiao);

    int temp = yuan*10+jiao;
    int n = temp/19;

    printf("%d",n);
    
    return 0;
}