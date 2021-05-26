#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10000001]={0};
    a[0]=a[1]=1;
    for(int i=2;i*i<=10000000;i++)
    {
        if(a[i]==0)
        {
            for(int j=i*i;j<=10000000;j+=i)
            {
                a[j]=1;
            }
        }
    }
    vector<int>v;
    int sum=0,n=0;
    for(int i=2;i<=10000000;i++)
    {
        sum=0;
        n=i;
        if(a[i]==0)
        {
           sum+=(n%10);
           n=n/10;
           sum+=(n%10);
           if(n>0)
           n=n/10;
           sum+=(n%10);
           if(n>0)
           n=n/10;
           sum+=(n%10);
           if(n>0)
           n=n/10;
           sum+=(n%10);
           if(n>0)
           n=n/10;
           sum+=(n%10); 
        }
        if(a[sum]==0)
        v.push_back(i);
    }
    int l,r;
    cin>>l>>r;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>=l && v[i]<=r)
        cout<<v[i]<<" ";
        if(v[i]>r)
        break;
    }
}