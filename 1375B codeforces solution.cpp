#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n,m;
       cin>>n>>m;
       long long int arr[n][m];
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<m;j++)
           {
               cin>>arr[i][j];
           }
       }
 
       bool x=1;
 
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<m;j++)
           {
             int t=0;
             if(i-1>=0) t++;
             if(i+1<n) t++;
             if(j-1>=0) t++;
             if(j+1<m) t++;
             if(arr[i][j]>t)
             {
                 //cout<<"NO"<<endl;
                 x=0;
             }
             arr[i][j]=t;
           }
       }
 
       if(x==0){
        cout<<"NO"<<endl;
        //return 0;
       }
       else{
 
 
 
       cout<<"YES"<<endl;
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<m;j++)
           {
               cout<<arr[i][j]<<" ";
           }
           cout<<endl;
       }
    }
 
    }
 
    return 0;
}
