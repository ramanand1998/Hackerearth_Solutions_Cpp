#include<bits/stdc++.h>
using namespace std;
#define p 1000000007
int main()
{
    int a[10000007]={0};
    a[0]=a[1]=1;
    for(int i=2;i*i<=10000000;i++)
    {
         if(a[i]==0)
         {
             for(int j=i*i;j<=10000000;j+=i)
                 a[j]=1;
         }
    }
    int c=0;
    for(int i=0;i<=10000000;i++)
    {
         if(a[i]==0)
         {
             c++;
         }
         a[i]=c;
    }
    int n,l=0,r;
    long long sum;
    scanf("%d",&n);
    r=n-1;
    for(int i=0;i<n;i++)
    {
       sum+=(a[abs(r)]-a[abs(l-1)]);
        l++;
        r++;
    }
    cout<<sum%p;
    
}