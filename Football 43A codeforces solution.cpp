//g++  7.4.0
 
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    vector<string>v;
 
    string s;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        v.push_back(s);
    }
   // cout<<v[1];
    sort(v.begin(),v.end());
    vector<int> fre;
    int cnt=1-1;
    for(int i=0;i<v.size()-1;i++)
    {
        //cout<<v[i]<<" ";
        if(v[i]==v[i+1])
        {
            cnt++;
        }
        else
        {
            fre.push_back(cnt);
            cnt=0;
        }
    }
    fre.push_back(cnt);
    int M=0;
    
    for(int i=0;i<fre.size();i++)
    {
       // cout<<fre[i]<<" ";
        M=max(M,fre[i]);
        
    }
    if(v[M]==v[0])
        cout<<v[0]<<endl;
    else
        cout<<v[M+1]<<endl;
    
}
