#include<iostream>
using namespace std;
int main()
{
    int a[10000007]={0};
    for(int i=2;i*i<=1000000;i++)
    {
        if(a[i]==0)
        {
            for(int j=i*i;j<=1000000;j+=i)
            {
                if(a[j]==0)
                a[j]=i;
            }
        }
    }
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,b=0;
         scanf("%d",&n);
        if(a[n]==0)
        printf("%d\n",b);
        else
        {
            printf("%d\n",n-a[n]);
        }
       

    }
}