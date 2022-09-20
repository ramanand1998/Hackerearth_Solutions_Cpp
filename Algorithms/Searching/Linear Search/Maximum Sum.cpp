#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
     long int a[n],i=0,c=0,sum=0,m=-10000000001;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>=0)
        {
            c++;
            sum=sum+a[i];
        }
        if(a[i]<0)
        m=max(m,a[i]);
        
    }
   // cout<<m<<" ";
    if(c!=0)
    {
    cout<<sum<<" ";
    cout<<c;
    }
    else
    {
        cout<<m<<" ";
        cout<<1<<" ";
    }
}