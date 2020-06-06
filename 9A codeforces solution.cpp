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
    int w,y,max;
    cin>>w>>y;
    int a;
    if(w>y)
    {
        max=w;
    }
    else if(w==y)
    {
        max=w;
    }
    else
    {
        max=y;
    }
    //cout<<max<<endl;
    
    if((w==6 && y==6))
    {
        cout<<"1"<<"/"<<"6"<<endl;
    }
    else if((w==6 && (y==1||y==2||y==3||y==4||y==5)))
    {
        cout<<"1"<<"/"<<"6"<<endl;
    }
    else if((y==6 && (w==1||w==2||w==3||w==4||w==5)))
    {
         cout<<"1"<<"/"<<"6"<<endl;
    }
    else
    {
         a=6-max+1;
         if(a==2)
         {
            cout<<"1"<<"/"<<"3"<<endl;
         }
         if(a==3)
         {
            cout<<"1"<<"/"<<"2"<<endl;
         }
         if(a==4)
         {
             cout<<"2"<<"/"<<"3"<<endl;
         }
         if(a==5 || a==1)
         {
             cout<<a<<"/"<<"6"<<endl;
         }
         if(a==6)
         {
             cout<<"1"<<"/"<<"1"<<endl;
         }  
    }  
    return 0;
}