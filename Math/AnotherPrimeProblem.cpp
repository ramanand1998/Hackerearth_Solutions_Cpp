#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000050]={0};
    a[0]=a[1]=1;
      for(int i=2;i*i<=1000049;i++)
      {
          if(a[i]==0)
          {
              for(int j=i*i;j<=1000049;j+=i)
              a[j]=1;
          }
      }
      int c=0;
      for(int i=1000049;i>=0;i--)
      {
          if(a[i]==0 && i%11==1)
          {
              c=i;
          }
          a[i]=c;
      }
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    scanf("%d",&t);
    while(t--)
    {
        int n,i=2,c=1,m;
        scanf("%d",&n);
        printf("%d\n",a[n]);
        
    }
}