#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,d;
    cin>>n>>d;
    long long int i=0,a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
     int c=0,c1=0;
    for(i=0;i<n;i++)
    {
       if(a[i]>d)
       {
          c1++;
          if(c1==2)
          {
              break;
          }
       }
       if(d>=a[i])
       {
           c++;
       }
    }
    cout<<c;
}