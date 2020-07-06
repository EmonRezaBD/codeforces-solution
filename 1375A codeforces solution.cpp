#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n;
       // int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>x;
            x=abs(x);
            if(i%2==1)
            {
                x *= -1;
            }
            cout<<x<<" ";
        }
        cout<<endl;
    }
 
    return 0;
}
