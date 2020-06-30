#pragma GCC optimize("ofsat")
#pragma GCC  target("avx,avx2,fma")
 
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
#define zrobits(x)      __builtin_ctzll(x)		//return total 0 until 1 found
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define sz(x)           (int)x.size()
#define w(x)            int x; cin>>x; while(x--)
 
 
#define arrsort(ar,n)   sort(ar,ar+n);
#define vsort(v)        sort(v.begin(),v.end())
#define vrev(v)         reverse(v.begin(),v.end())
#define arrev(ar,n)     reverse(ar,ar+n)
 
 
#define Fo(i,k,n) 		for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define deb(x) 			cout << #x << "=" << x << endl
#define deb2(x, y) 		cout << #x << "=" << x << "," << #y << "=" << y << endl
#define iter(it, a) 	for(auto it = a.begin(); it != a.end(); it++)
#define print(a)        for (auto x : a) cout << x.ff << " "<<x.ss<<endl;
#define for0(i,n)       for(ll i=0;i<n;i++)
 
 
 
#define fast 		    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
 
 
#define PI              acos(-1.0)
#define EPS             1e-12
 
 
const ll 				inf = 1000000000;
const ll 				mod = 1000000000 + 7;
 
 
// int dx4[] = { 0, 0, -1, +1 };                     int dy4[] = { +1, -1, 0, 0 };
// int dx8[] = { 1, 1, 0, -1, -1, -1, 0, 1, 0 };     int dy8[] = { 0, 1, 1, 1, 0, -1, -1, -1, 0 };
 
 
 
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
 
// typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
 
// void freqOfLetter(string &str)
// {
//     // int cnt=0;
 
//     unordered_map<char,int> mp;
 
//     for0(i, sz(str))
//     {
//         mp[str[i]]++;
//     }
 
//     // cout<<"Letter Freq: "<<endl;
 
//     // for(auto it = mp.begin(); it!=mp.end();it++)
//     // {
//     //  cout<<it->ff<<" "<<it->ss<<endl;
//     // // }
//     // iter(it,mp)
//     // {
//     //     cout<<it->ff<<" "<<it->ss<<endl;
//     // }
//     // cout<<mp.count()<<endl;
//     cout<<mp.size()<<endl;
 
//     // for(auto &x:mp)
//     // {
//     //  cout<<x.ff<<" "<<x.ss<<endl;
//     // }
// }
 
 
//ll dp[2000009]; //Bigger array should declair outside.
 
unordered_map<char,int> freqOfLetter(string &str)
{
    //int cnt=0;
 
    unordered_map<char,int> mp;
 
    for0(i, sz(str))
    {
        mp[str[i]]++;
    }
 
    //cout<<"Letter Freq: "<<endl;
 
    // for(auto it = mp.begin(); it!=mp.end();it++)
    // {
    //  cout<<it->ff<<" "<<it->ss<<endl;
    // }
    // iter(it,mp)
    // {
    //     cout<<it->ff<<" "<<it->ss<<endl;
    // }
 
    // for(auto &x:mp)
    // {
    //  cout<<x.ff<<" "<<x.ss<<endl;
    // }
    return mp;
}
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin); //No need to comment out
        freopen("output.txt", "w", stdout);
    #endif
    fast;
    //<------------------Bismillah............>
 
    //string s1,s2;
    char s1[100005],s2[100005],a[2],b[2];
 
    cin>>s1>>s2;
    int cnt=0,j=0;
    int len1=strlen(s1);
    int len2=strlen(s2);
 
    if(len1!=len2){
        cout<<"NO"<<endl;
        return 0;
    }
    else
    {
        for(int i=0;i<len1;i++)
        {
            if(s1[i]!=s2[i])
            {
                cnt++;
                a[j]=s1[i]; //diff char gula strore korlam.
                b[j]=s2[i];
                j++;
 
                if(cnt>2)
                {
                    cout<<"NO"<<endl;
                    return 0;
                }
            }
        }
    }
 
    if(a[1]==b[0] && a[0]==b[1])
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
 
    
 
    return 0;
}
