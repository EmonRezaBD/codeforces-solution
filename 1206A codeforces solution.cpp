#include<iostream>
#include<ctype.h>
#include<string.h>
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
    int n;
    cin>>n;
    int A[200];
    int i=0;
    int maxA=0;
    for0(i,n)
    {
        cin>>A[i];
        if(A[i]>maxA)
        {
            maxA=A[i];
        }
    }
    //cout<<maxA;
    int m;
    int B[200];
    cin>>m;
    int maxB=0;
    for0(i,m)
    {
        cin>>B[i];
        if(B[i]>maxB)
        {
            maxB=B[i];
        }
    }
    cout<<maxA<<" "<<maxB<<endl;
    //for(int i)
    return 0;
}