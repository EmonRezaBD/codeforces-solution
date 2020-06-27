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
	int t;
	cin>>t;
	//ll x,y;
	string s;
	while (t--)
	{
		cin>>s;
		int sum=0;
		int x=0;
		//cout<<s[0]-'0'<<endl;
		int atlestzero=0;
		int even=0;
		for(int i=0;i<s.size();i++)
		{
			x=(int)(s[i]-'0'); ///char to int conversion.
			if(x==0)
			   atlestzero++;
			if( !(x&1))
				even++;
			sum+=x;
		}
        if(sum%3==0 && atlestzero>=1 && even>=2)
		    cout<<"red"<<endl;
		else 
			cout<<"cyan"<<endl;		
 
	}
	return 0;
}
