#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000007]={0};
    a[0]=a[1]=1;
    for(int i=2;i*i<=1000000;i++)
    {
        if(a[i]==0)
        {
           // cout<<i<<" ";
            for(int j=i*i;j<=1000000;j+=i)
            {
                a[j]=1;
            }
        }
    }
    int c=0;
    for(int i=0;i<=1000000;i++)
    {
       if(a[i]==0)
       {
      c++;
       }
       a[i]=c;
    }
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int l,r,l1,r1;
        scanf("%d%d",&l,&r);
        l1=min(l,r);
        r1=max(l,r);
        printf("%d\n",a[r1]-a[l1-1]);

    }
}