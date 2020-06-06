#include <iostream>
using namespace std;
int main()
{
    long long int a,b,k,sum,tsum=0;
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b>>k;
        if(k%2==0)
        {
            sum = k/2;
            tsum=(sum*a)-(sum*b);
            cout<<tsum<<endl;
        }
        else
        {
            sum = (k/2)+1;
            tsum=(sum*a)-((sum*b)-b);
            cout<<tsum<<endl;
        }
 
    }
    return 0;
}