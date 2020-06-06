#include<iostream>
//#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
main()
{
    int a,b,c,d,x,y;
    cin>>a>>b>>c>>d;
    x=max(3*a/10,a-(a/250*c));
    y=max(3*b/10,b-(b/250*d));
   cout<<(x>y?"Misha" : (x<y? "Vasya" : "Tie"));
   
}