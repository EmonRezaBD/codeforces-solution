#include<iostream>
using namespace std;
int main()
{
    int n,m,track=0;
    char ch;
    cin>>n>>m;
    char arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]=='C'||arr[i][j]=='M'||arr[i][j]=='Y')
            {
                track=1;
                break;
            }
        }
 
    }
     if(track==0)
            {
                 cout<<"#Black&White"<<endl;
            }
 
      else if(track==1)
             cout<<"#Color"<<endl;
 
  return 0;
}