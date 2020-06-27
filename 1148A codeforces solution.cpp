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
#include<cmath>
#include<map>
 
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
 
 
int main()
{
 
//	freopen("input.txt","r",stdin);
	fast;
	//int t;
	//cin>>t;
	//ll x,y;
	//string s;
	ll a,b,c;
	//ll res=0;
		cin>>a>>b>>c;
		if(a>b)
		{
			cout<< c*2+b+(b+1)<<endl;
		}
		else if(a<b)
		{
			cout<< c*2+a+(a+1)<<endl;
		}
		else
		{
			cout<<c*2+a+b<<endl;
		}
		
 
		
 
		return 0;
}
