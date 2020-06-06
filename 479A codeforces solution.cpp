#include<stdio.h>
int main()
{
    int a,b,c,x,y,z,p,max,max2,u,max3;
    scanf("%d%d%d",&a,&b,&c);
    x=a+b*c;
    y=a*(b+c);
    z=a*b*c;
    p=(a+b)*c;
    u=a+b+c;
    if(x>y)
    {
        max=x;
    }
    else
        max=y;
    if(z>p)
    {
        max2=z;
    }
    else
        max2=p;
    if(max>max2)
    {
        max3=max;
    }
    else
        max3=max2;
    if(max3>u)
    {
        printf("%d\n",max3);
    }
    else
        printf("%d\n",u);
}
 