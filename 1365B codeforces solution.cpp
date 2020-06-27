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
        cin>>n;
        ll a[n];
        ll b[n];
        bool alreadySorted=1,have0=0,have1=0;
        for(ll i=1;i<=n;i++)
        {
            cin>>a[i];
            if(i>=2 && a[i]< a[i-1]) //Check whether sorted or not.
            {
                alreadySorted=0;
            }
        }
        for(ll i=1;i<=n;i++)
        {
            cin>>b[i];
            if(!b[i])
                have0=1;
            else
                have1=1;
        }
       if(have0 && have1) //at least one 1 and 1 zero
       {
           cout<<"Yes"<<endl;
       }
       else if (alreadySorted)
       {
           /* code */
           cout<<"Yes"<<endl;
       }
       else
       { 
           cout<<"No"<<endl;
       }
    }
    return 0;
}
