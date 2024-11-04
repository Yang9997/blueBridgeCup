#include<stdio.h>
int main(void)
{
    int a[10];
    for(int i = 0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    int height;
    scanf("%d",&height);

    int num = 0;
    for (int i=0;i<10;i++)
    {   
        if(a[i]<=(height+30))
            num++;
    }

    printf("%d",num);
    
    return 0;
}