#include<iostream>
#include<ctype.h>
#include<string.h>
#include<vector>
#include<algorithm>
#include<stdlib.h>
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
 
int removeAllZero(int num)
{
    int temp=0;
    int ten=1;
    while(num)
    {
        int dig=num%10;
        num /= 10;
        if(dig)
        {
            temp+=dig*ten;
            ten*=10;
        }
    }
    return temp;
}
int main()
{
    fast;
    int a,b,c;
    cin>>a>>b;
    c=a+b;
    a= removeAllZero(a);
    b= removeAllZero(b);
    c= removeAllZero(c);
    if(a+b==c)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}