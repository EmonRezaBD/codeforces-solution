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
 
//int adj[100][100];
int main()
{
    fast;
    //freopen ("input.txt","r",stdin);
    int t;
    //cin>>t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
 
        ll a[n];
        ll even=0,odd=0;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
 
            if(a[i]%2==0)
                even++;
            else
                odd++;
        }
        if(even%2==0 && odd%2==0)
            cout<<"YES"<<endl;
        else
        {
            sort(a,a+n);
 
            ll flag=0;
            for(ll i=0;i<n-1;i++)
            {
                if( (abs(a[i]- a[i+1])==1) && ((a[i]%2==0 && a[i+1]%2!=0) || (a[i]%2!=0 && a[i+1]%2==0)))
                {
                    flag=1;
                }
                
            }
            if(flag==1)
               cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        
 
    }
    return 0;
 
}
 
