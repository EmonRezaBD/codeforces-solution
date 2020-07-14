//g++  7.4.0
 
#include <iostream>
#include<stdlib.h>
#include<string.h>
#include<string>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string s;
    getline(cin,s);
    vector<char>v;
    
    int letter=0;
    
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            v.push_back(s[i]);
            letter++;
        }
    }
    if(letter==0)
        cout<<0<<endl;
    else
    {
        sort(v.begin(),v.end());
        int cnt=0;
        for(int i=0;i<v.size()-1;i++)
        {
            if(v[i]!=v[i+1])
            {
                cnt++;
            }
        }
        cout<<cnt+1<<endl;
    }
    return 0;
    
}
