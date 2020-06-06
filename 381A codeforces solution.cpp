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
 
int main()
{
    fast;
    int n;
    cin>>n;
    int * arr;
    arr = new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int i=0;
   /* for0(i,n)
    {
        cout<<arr[i]<<" "<<endl;
    }
    cout<<"OK"<<endl;*/
    int * p1;
    int * p2;
    p1= &arr[0];
    p2 = &arr[n-1];
   // cout<< *p1<<endl;
    //cout<< *p2<<endl;
    //p2--;
    //cout<< *p1<<endl;
    int dimaSum=0;
    int SerejaSum=0;
    i=1;
    while(i<=n)
    {
       if(i%2!=0)
       {
            if((*p1) > (*p2))
            {
                SerejaSum+= (*p1);
                p1++;
                i++;
            }
            else
            {
                SerejaSum+= (*p2);
                p2--;
                i++;
            }  
       }
       //if(i%2==0)
       else
       {
           if((*p1) > (*p2))
            {
                dimaSum+= (*p1);
                p1++;
                i++;
            }
            else
            {
                dimaSum+= (*p2);
                p2--;
                i++;
            }  
       } 
    }
    //i++;
    cout<<SerejaSum<<" "<<dimaSum<<endl;
 
   
    return 0;
}