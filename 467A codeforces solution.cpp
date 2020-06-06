#include<stdio.h>
int main()
{
    int n,i,p,q,yo,count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&p);
        scanf("%d",&q);
        if(p<q && p==0 && q>1)
        {
        count++;
        }
        else
        {
            yo=q-p;
            if(yo>=2)
        {
            count++;
        }
        }
    }
    printf("%d\n",count);
 
    return 0;