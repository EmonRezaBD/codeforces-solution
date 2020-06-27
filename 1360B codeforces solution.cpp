#include<stdio.h>
#include<iostream>
#include<ctype.h>
#include<cstring>
#include<vector>
#include<algorithm>
#include<stdlib.h>
#include<queue>
#include<list>
#include<set>
#include<algorithm>
#include<string>
#include<stack>
 
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
#define              for0(i,n)       for(long long int i=0;i<n;i++)
 
//int adj[100][100];
int main()
{
    fast;
    // freopen ("input.txt","r",stdin);
    int t;
    int n;
    multiset<int>m;
    multiset<int>::iterator it;
    multiset<int>::iterator anotherit;
 
    //cout<< *m.begin();
    int x;
    int min;
    cin>>t;
    while(t--)
    {
        cin>>n;
       for(int i=0;i<n;i++)
       {
           cin>>x;
           m.insert(x);
       }
       it=m.begin();
       anotherit=m.begin();
       anotherit++;
       min=abs((*it) - (*anotherit));
       while(anotherit!=m.end())
       {
           if(abs((*anotherit)-(*it)) <= min)
           {
               //cout<<*it<<" ";
               min=abs((*anotherit)-(*it));
               //anotherit++;
               //it++;
           }
           anotherit++;
           it++;
       }
       cout<<min<<endl;
       //min=abs((*it) - (*anotherit));
       m.clear();
 
       
 
       //cout<< *m.end();
       
    }
    return 0;
 
}
 
