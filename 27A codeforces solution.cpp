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
 
int main()
{
    fast;
   //freopen ("input.txt","r",stdin);
   //freopen ("output.txt","w",stdout);
   multiset<int>m;
   int n;
   cin>>n;
   int i=0;
   int x;
   for0(i,n)
   {
       cin>>x;
       m.insert(x);
   }
   multiset<int>::iterator it;
   it =m.begin();
   int lowest = *it;
   it++;
  // cout<<lowest;
   while(1)
   {
       if(lowest==1)
       {
           for(it=m.begin();it!=m.end();it++)
           {
               if((*it)==lowest)
               {
                   lowest++;
               }
               else
               {
                   break;
               } 
           }    
           cout<<lowest<<endl;
           break;       
       }
       else
       {
           lowest--;
           if(lowest==1)
           {
               cout<<lowest<<endl;
               break;
           }
 
       } 
   }     
    return 0;
}
