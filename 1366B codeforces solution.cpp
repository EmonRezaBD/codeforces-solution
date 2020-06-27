#include<iostream>
#include<ctype.h>
#include<string.h>
#include<vector>
#include<algorithm>
#include<stdlib.h>
#include<queue>
#include<list>
#include<set>
#include<algorithm>
#include<string>
using namespace std;
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ull unsigned long long
#define ll long long int
#define pb push_back
#define  for0(i,n)   for (i=0; i<n; i++)
#define   for1(i,n)  for (i=1; i<=n; i++)
#define  forab(i,a,b)for (i=a; i<=b; i++)
#define   rof0(i,n)  for (i=n-1; i>=0; i--)
#define  rof1(i,n)   for (i=n; i>=1; i--)
 
 
const int MOD = 1000000007;
const int MAX = 1000005;
 
/*int SetBit (int n, int x) { return n | (1 << x); }
int ClearBit (int n, int x) { return n & ~(1 << x); }
int ToggleBit (int n, int x) { return n ^ (1 << x); }
bool CheckBit (int n, int x) { return (bool)(n & (1 << x)); }*/
 
int main()
{
    fast;
    int t;
     //freopen("input.txt", "r",stdin);
    cin>>t;
    ll n;
    
    while(t--)
    {
        ll n,x,m;
        cin>>n>>x>>m;
        ll l=x,r=x;
        for(ll i=0;i<m;i++)
        {
            ll p,q;
            cin>>p>>q;
            if(q<l || p>r)
            {
                continue;
                cout<<"con"<<endl;
            }
            else
            {
                l=min(l,p);
                r=max(r,q);
            }
            
        }
        cout<<r-l+1<<endl;
    }
    return 0;
}
