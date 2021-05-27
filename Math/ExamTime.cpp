#include<bits/stdc++.h>
using namespace std;
#define ulli unsigned long long int
#define max 1000001

int main()
{
    int a[max];
    for(int i=0;i<=max;i++)
    a[i]=i;
    for(int i=2;i<=max;i++)
    {
        if(a[i]==i)
        {
            for(int j=i;j<=max;j+=i)
            {
                a[j]=a[j]/i;
                a[j]=a[j]*(i-1);
            }
        }
    }
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
     scanf("%d",&n); 
     printf("%d\n",a[n]);  
    }

}