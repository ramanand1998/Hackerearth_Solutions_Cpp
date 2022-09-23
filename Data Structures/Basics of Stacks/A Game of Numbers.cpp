#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++)
      cin>>a[i];
  
    long long ans[n];
    for(int i=0;i<n;i++)
    {
      int f1=0,f2=0,x,inx=0;
        for(int j=i+1;j<n;j++)
        {
          if(a[j]>a[i] && inx==0)
          {
            f1=1;
            inx=j;
          }
          if(a[j]<a[inx] && f1==1)
          {
            f2=1;
            x=a[j];
            break;
          }
        }
        if(f1==1 && f2==1)
        ans[i]=x;
        else
        ans[i]=-1;
    }
    for(int i=0;i<n;i++)
      cout<<ans[i]<<" ";
}