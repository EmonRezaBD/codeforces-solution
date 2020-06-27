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
 
	//freopen("input.txt","r",stdin);
	fast;
	//cout<<0%2<<endl;
	int t;
	cin>>t;
	int n;
	map<int,int>m;
	map<int,int>::iterator it;
	while(t--)
	{
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		if(n==1)
		{
			if( !(arr[0] & 1) )
			     cout<<0<<endl;
		    else
			     cout<<-1<<endl;
		
			
		}
		else
		{   int x;
			for(int i=0;i<n;i++)
			{
				x=arr[i]%2;
				m.insert(make_pair(i,x));
			}
			int cnt1=0;
			int cnt0=0;
			for(it=m.begin();it!=m.end();it++)
			{
				//cout<<it->first <<" "<<it->second<<endl;
				if( it->first%2==0 && it->second==1)
				{
					cnt1++;
				}
				if(it->first%2!=0 && it->second==0 )
				{
					cnt0++;
				}
				
			}
			if(cnt1==cnt0)
				cout<<cnt1<<endl;
			else
				cout<<-1<<endl;	
			
		}
		//cout<<cnt1<<" "<<cnt0<<endl;
		//cnt0=0;
		//cnt1=0;
		m.clear();
 
	}
 
 
 
	
	return 0;
}
