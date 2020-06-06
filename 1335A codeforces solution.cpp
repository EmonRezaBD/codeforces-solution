#include<bits/stdc++.h>
 
#define ll long long int
 
using namespace std;
int main()
{
    ll n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==1 || n==2)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<(n-1)/2<<endl;
        }
    }
    return 0;
}