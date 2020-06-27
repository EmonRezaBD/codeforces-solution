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
#define ll long long
#define pb push_back
#define  for0(i,n)   for (i=0; i<n; i++)
#define   for1(i,n)  for (i=1; i<=n; i++)
#define  forab(i,a,b)for (i=a; i<=b; i++)
#define   rof0(i,n)  for (i=n-1; i>=0; i--)
#define  rof1(i,n)   for (i=n; i>=1; i--)
 
 
const int MOD = 1000000007;
const int MAX = 1000005;
 
int SetBit (int n, int x) { return n | (1 << x); }
int ClearBit (int n, int x) { return n & ~(1 << x); }
int ToggleBit (int n, int x) { return n ^ (1 << x); }
bool CheckBit (int n, int x) { return (bool)(n & (1 << x)); }
 
int main()
{
    fast;
    multiset<int>box;
    int n;
    cin>>n;
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        box.insert(x);
    }
    multiset<int>::iterator it;
    for(it=box.begin();it!=box.end();it++)
    {
        cout<<*it<<" ";
    }
 
 
    return 0;
}
