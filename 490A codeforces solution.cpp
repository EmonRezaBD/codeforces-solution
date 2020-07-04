#pragma GCC optimize("ofsat")
#pragma GCC target("avx,avx2,fma")
 
#include<bits/stdc++.h>
#include<unordered_map>
 
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
 
 
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> > //read??
 
 
#define setbits(x)      __builtin_popcountll(x) //return total setbit
#define zrobits(x)      __builtin_ctzll(x)      //return total 0 until 1 found
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define sz(x)           (int)x.size()
#define w(x)            int x; cin>>x; while(x--)
 
 
#define arrsort(ar,n)   sort(ar,ar+n);
#define vsort(v)        sort(v.begin(),v.end())
#define vrev(v)         reverse(v.begin(),v.end())
#define arrev(ar,n)     reverse(ar,ar+n)
 
 
#define Fo(i,k,n)       for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define deb(x)          cout << #x << "=" << x << endl
#define deb2(x, y)      cout << #x << "=" << x << "," << #y << "=" << y << endl
#define iter(it, a)     for(auto it = a.begin(); it != a.end(); it++)
#define riter(it,a)     for(auto it = a.rbegin();it != a.rend(); it++)
#define for0(i,n)       for(int i=0;i<n;i++)
#define forAll(a)       for(auto x: a) cout<<x<<" ";
 
 
 
#define fast            ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
 
 
#define PI              acos(-1.0)
#define EPS             1e-12
#define N               300000
 
 
const ll                inf = 1000000000;
const ll                mod = 1000000000 + 7;
 
 
// int dx4[] = { 0, 0, -1, +1 };                     int dy4[] = { +1, -1, 0, 0 };
// int dx8[] = { 1, 1, 0, -1, -1, -1, 0, 1, 0 };     int dy8[] = { 0, 1, 1, 1, 0, -1, -1, -1, 0 };
 
 
 
// template<typename... T>
// void read(T&... args)
// {
//  ((cin >> args), ...);
// }
 
 
// template<typename... T>
// void write(T&&... args)
// {
//  ((cout << args <<" "), ...);
// }
 
// mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());
 
// typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin); //No need to comment out
        freopen("output.txt", "w", stdout);
    #endif
    fast;
    //-------------------- Bismillah  -------------> 
   
    int n;
    cin>>n;
    vi v(n);
    for(auto & i: v)
    {
      cin>>i;
    }
    // vsort(v);
    // vrev(v);
    int cnt1=0,cnt2=0,cnt3=0;
 
    for0(i, n)
    {
      if(v[i]==3){
        cnt3++;
      }
      if(v[i]==2){
        cnt2++;
      }
      if(v[i]==1){
        cnt1++;
      }
    }
    vi one;
    vi two;
    vi three;
    for(int i=0; i<n;i++)
    {
      if(v[i]==3){
         three.pb(i+1);
      }
      else if(v[i]==2){
        two.pb(i+1);
      }
      else{
        one.pb(i+1);
      }
    }
 
    //cout<<cnt3;
    int M=min(cnt1,min(cnt2,cnt3));
    cout<<M<<endl;
    if(M!=0)
    {
      for0(i, M)
      {
         cout<<one[i]<<" "<<two[i]<<" "<<three[i]<<endl;
      }
    }
 
 
 
 
    return 0;
}
