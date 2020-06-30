#include<bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
#include<vector>
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
#define for1(i,n)       for(ll i=1;i<=n;i++)
 
 
 
 
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
 
int main()
{
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin); //No need to comment out
	    freopen("output.txt", "w", stdout);
	#endif
    fast;
    //-------------------- Bismillah  -------------> 
 
    w(t)
    {
    	ll n;
    	cin>>n;
 
    	ll arr[2*n+1];
    	ll oddCnt=0;
    	ll evenCnt=0;
 
    	vector<ll> even,odd; //2 vecs
 
    	for(ll i=1;i<=2*n;i++)
    	{
    		cin>>arr[i];
    		if( !(arr[i]&1) )
    		{
    			evenCnt++;
    			even.pb(i);
    		}
    		else
    		{
    			oddCnt++;
    			odd.pb(i);
    		}
    	}
    	//for1(i,2*n) cout<<arr[i]<<" ";
    	vector< pair<ll,ll> > v;
 
    	if( (evenCnt%2==0) && (oddCnt%2==0) ) 
    	{
    		if(evenCnt!=0)
    		{
    					
    			for(ll i=2;i<sz(even);i+=2)
    			{
    				v.pb(mp(even[i],even[i+1]));
    			}
    		
    			for (int i = 0; i < sz(odd); i+=2)
    			{
    				v.pb(mp(odd[i],odd[i+1]));
    			}
 
 
    		}
    		else
    		{
    			for(ll i=2;i<sz(odd);i+=2)
    			{
    				v.pb(mp(odd[i],odd[i+1]));
    			}
    		}
 
    	}
 
    	else
    	{
    		for(ll i=1;i<sz(even);i+=2)
    		{
    			v.pb(mp(even[i],even[i+1]));
    		}
    		for(ll i=1;i<sz(odd);i+=2)
    		{
    			v.pb( mp(odd[i],odd[i+1]) );
    		}
 
    	}
 
    	for0(i,sz(v))
    	{
    		cout<<v[i].first<<" "<<v[i].second<<endl;
    	}
 
 
 
 
 
    }
 
  return 0;
 
}
