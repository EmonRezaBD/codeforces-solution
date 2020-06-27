#include<stdio.h>
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
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
#define              for0(i,n)       for(int i=0;i<n;i++)
int main()
{
    fast;
    //freopen ("input.txt","r",stdin);
    ll n,k,c;
    cin>>n>>k;
    if(n%2==0)
    {
        c=n/2;
    }
    else{
        c=(n/2)+1;
    }
    if(k<=c)
    {
        cout<<(k*2)-1<<endl;
    }
    else{
        cout<<(k-c)*2<<endl;
    }
 
 
 
    return 0;
}
 
