#include<iostream>
#include<string.h>
//#include<ctype.h>
//#include<vector>
using namespace std;
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ull unsigned long long
#define ll long long
int main()
{
    ll t;
    cin>>t;
    ll n,k;
    ll sq=0;
    while(t--)
    {
        cin>>n>>k;
        sq=k*k;
        if(sq>n)
        {
            cout<<"NO"<<endl;
        }
        else if(sq==n)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            if(k & 1)
                (n & 1) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
            else
            {
                (n & 1) ? cout<<"NO"<<endl : cout<<"YES"<<endl;
            }
            
        }
        
    }
    
    return 0;
}