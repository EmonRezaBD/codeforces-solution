#include<stdio.h>
#include<iostream>
#include<ctype.h>
#include<cstring>
#include<vector>
#include<algorithm>
#include<stdlib.h>
#include<queue>
#include<list>
#include<set>
#include<algorithm>
#include<string>
#include<stack>
#include<cmath>
 
using namespace std;
#define              ll              long long int
#define              ff              first
#define              ss              second
#define              arsort(ar,n)    sort(ar,ar+n);
#define              vsort(v)        sort(v.begin(),v.end())
#define              vrev(v)         reverse(v.begin(),v.end())
#define              arrev(ar,n)     reverse(ar,ar+n)
#define              pb              push_back
#define              popb            pop_back
#define              fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define              for0(i,n)       for(long long int i=0;i<n;i++)
 
 
ll solve(ll n)
{
    list<ll>L;
    for(ll i=1;i*i<=n;i++)
    {
        if( (n%i)==0 )
        {
            if(i != n/i)
            {
                L.push_front(i);
                L.push_front(n/i);
            }
            else
            {
               L.push_front(i);
            }
            
        }
    }
    L.sort();
    auto a = upper_bound(L.begin(),L.end(),1);
    return *a;
   
}
int main()
{
    fast;
    //freopen ("input.txt","r",stdin);
    int t;
    cin>>t;
    ll n,k;
    while (t--)
    {
        cin>>n>>k;
        if( !(n & 1) )
            cout<<n+k*2<<endl; 
        else
        {
            ll a=solve(n);
            cout<<n+a+(k-1)*2<<endl;            
        }
        
        
    }
    
    return 0;
 
}