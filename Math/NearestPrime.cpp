#include<iostream>
using namespace std;
int main()
{
    int a[1000001]={0},a1[1000001]={0},a4[1000001]={0};
    for(int i=2;i*i<=1000000;i++)
    {
        if(a[i]==0)
        {
            for(int j=i*i;j<=1000000;j+=i)
            {
                a[j]=1; 
                a1[j]=1;
                a4[i]=1;
            }
        }
    }
    int c=0;
    int a2[1000001]={0},a3[1000001]={0};
     for(int i=2;i<=1000000;i++)
    {
       if(a[i]==0)
            c=0;
        else
        {
            c++;
            a2[i]=c;
        }
    }
    c=0;
     for(int i=1000000;i>=2;i--)
    {
       if(a[i]==0)
            c=0;
        else
        {
            c++;
            a3[i]=c;
        }
    }
    c=0;
    for(int i=2;i<=1000000;i++)
    {
       if(a[i]==0)
            c=0;
        else
        {
            c++;
            a2[i]=c;
        }
    }
    c=0;
     for(int i=2;i<=1000000;i++)
    {
        if(a[i]==0)
        {
            c=i;
            a[i]=i;
        }
        else
            a[i]=c;
    }
    for(int i=1000000;i>=2;i--)
    {
        if(a1[i]==0)
        {
            c=i;
            a1[i]=i;
        }
        else
            a1[i]=c;
    }
    c=0;
    for(int i=2;i<=1000000;i++)
    {
       if(a2[i]<=a3[i])
       {
           a4[i]=a[i];
       }
       else{
          a4[i]=a1[i]; 
       }
    }
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        printf("%d\n",a4[n]);
    }
}