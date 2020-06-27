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
	ll b,k;
	int arr[100000];
	cin>>b>>k;
	int sum=0;
	ll power=1;
	for(int i=0;i<k;i++)
	{
		cin>>arr[i];
	}
	for(ll i=k-1;i>=0;i--)
	{
		sum=(sum+arr[i]*power)%2;
		power=(power*b)%2;
	}
	if( sum==0 )
	    cout<<"even"<<endl;
	else
	{
		cout<<"odd"<<endl;
	}
	
	
	return 0;
}
