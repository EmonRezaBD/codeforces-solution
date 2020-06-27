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
 
	int t;
	cin>>t;
	string s;
	vector<char>v;
	while(t--)
	{
		cin>>s;
		if(s.size()==2)
		   cout<<s<<endl;
		else
		{
			for(int i=0;i< s.size()-1 ;i+=2) //debug
			{
				if(s[i]!=s[i+1])
				{
					v.push_back(s[i]);
					//v.push_back(s[i+1]);
				}
				else
				{
					v.push_back(s[i]);
				}
				
			}
			v.push_back(s[s.size()-1]);
			for(int i=0;i<v.size();i++)
			{
				cout<<v[i]<<"";
			}
			cout<<endl;
			v.clear();
			
		}
		
		
 
	}
	return 0;
}
