#include<stdio.h>
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
 
//#include<bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
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
#define              for0(i,n)       for(int i=0;i<n;i++)
ll arr[1005];
 
int main()
{
    fast;
    //freopen ("input.txt","r",stdin);
   // freopen ("output.txt","w",stdout);
 
    ll n,i,ans=0;
    cin>>n;
    
        for (i=0; i<n; i++)
           cin>>arr[i];
 
        sort (arr,arr+n);
 
        ans = 0;
 
        for (i=0; i<n-1; i++)
            if (arr[i+1]-arr[i] > 1)
                ans += arr[i+1]-arr[i]-1; //difference says how many number between those two.
 
        cout<<ans<<endl;
    
    
    return 0;
}
 
