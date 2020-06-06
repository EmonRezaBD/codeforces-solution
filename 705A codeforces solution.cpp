#include<iostream>
//#include<ctype.h>
//#include<string.h>
//#include<vector>
//#include<algorithm>
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
    if(n==1)
    {
        cout<<"I hate it"<<endl;
    }
    else
    {
            int i;
            for(i=1;i<n;i++)
            {
                cout<<"I ";
                if(i%2!=0)
                {
                    cout<<"hate that ";
                }
 
                else
                {
                    cout<<"love that ";
                }
 
            }
            //i--;
 
           //cout<<i;
           if(i%2==0)
           {
               cout<<"I love it"<<endl;
           }
           else{
            cout<<"I hate it"<<endl;
           }
    }
 
    return 0;
}