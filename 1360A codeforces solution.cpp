#include<iostream>
using namespace std;
int main()
{
   int t;
   int a,b;
   int minVal;
   int maxVal;
   int ans;
   cin>>t;
   while(t--)
   {
       cin>>a>>b;
       minVal= min(a,b);
       maxVal= max(a,b);
       ans= max(minVal * 2, maxVal);
       cout<<ans*ans<<endl;
       
   }
  
    return 0;
}