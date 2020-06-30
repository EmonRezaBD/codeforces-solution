#include<bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
using namespace std;
 
 
#define ui              unsigned int
#define ll              long long int
#define ld              long double
#define ull             unsigned long long int
 
 
#define ff              first
#define ss              second
#define pb              push_back
#define mp              make_pair
 
 
#define pii             pair<ll,ll>
#define vi              vector<ll>
#define mii             map<ll,ll>
#define pqb             priority_queue<ll>
#define pqs             priority_queue<ll,vi,greater<ll> > //read??
 
 
#define setbits(x)      __builtin_popcountll(x) //return total setbit
#define zrobits(x)      __builtin_ctzll(x)		//return total 0 until 1 found
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define sz(x)           (ll)x.size()
#define w(x)            ll x; cin>>x; while(x--)
 
 
#define arrsort(ar,n)   sort(ar,ar+n);
#define vsort(v)        sort(v.begin(),v.end())
#define vrev(v)         reverse(v.begin(),v.end())
#define arrev(ar,n)     reverse(ar,ar+n)
 
 
#define Fo(i,k,n) 		for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define deb(x) 			cout << #x << "=" << x << endl
#define deb2(x, y) 		cout << #x << "=" << x << "," << #y << "=" << y << endl
#define iter(it, a) 	for(auto it = a.begin(); it != a.end(); it++)
#define for0(i,n)       for(ll i=0;i<n;i++)
 
 
 
#define fast 		    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
 
 
#define PI              acos(-1.0)
#define EPS             1e-12
 
 
// const 				inf = 1000000000;
// const ll 				mod = 1000000000 + 7;
 
 
// ll dx4[] = { 0, 0, -1, +1 };                     ll dy4[] = { +1, -1, 0, 0 };
// ll dx8[] = { 1, 1, 0, -1, -1, -1, 0, 1, 0 };     ll dy8[] = { 0, 1, 1, 1, 0, -1, -1, -1, 0 };
 
 
 
// template<typename... T>
// void read(T&... args)
// {
// 	((cin >> args), ...);
// }
 
 
// template<typename... T>
// void write(T&&... args)
// {
// 	((cout << args <<" "), ...);
// }
 
// mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());
 
// typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
// ll gcd(ll a, ll b)
// {
//     ///trivial case gcd(a, 0) = a
//     if(b == 0) return a;
//     if(a == b) return a;
//     return gcd(b, a % b);
// }
///iterative gcd
// ll gcd(ll a, ll b)
//  {
//     while(b)
//     {
//         ll temp =  a % b;
//         a = b;
//         b = temp;
//     }
//     return a;
// }
 
ll findMax(ll arr[] ,ll n)
{
	ll h =0;
	for0(i,n)
	{
		h= max(h,arr[i]);
	}
 
	ll count[h+1];
	for0(i,h+1) count[i]=0;
	for0(i,n)
	{
		count[arr[i]]++;
	}
    
    ll c=0;
    for(ll i=h; i>=1 ;i--)
    {
    	ll j=i;
    	c=0;
    	while(j<=h)
    	{
    		if(count[j] >=2)
    		{
    			return j;
    		}
    		else if(count[j] ==1)
    		{
    			c++;
    		}
 
    		j+=i;
 
    		if(c==2)
    			return i;
    	}
    }
}
 
int main()
{
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin); //No need to comment out
	    freopen("output.txt", "w", stdout);
	#endif
    fast;
    //-------------------- Bismillah  -------------> 
    ll n;
    w(t)
    {
      cin>>n;
      ll arr[n];
      for(ll i=1;i<=n;i++)
      {
      	arr[i-1]=i;
      }
      // for (ll i = 0; i < n; ++i)
      // {
      // 	/* code */cout<<arr[i]<<" ";
      // }
      ll s= sizeof(arr)/ sizeof(arr[0]);
      cout<<findMax(arr,s)<<endl;
 
    }
 
    
 
 
    return 0;
}
