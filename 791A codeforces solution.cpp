#include<stdio.h>
int main()
{
    int a,b,count=0;
    scanf("%d%d",&a,&b);
    while(b>=a)
    {
        a=3*a;
        b=2*b;
        count++;
    }
    printf("%d\n",count);
    return 0;
}