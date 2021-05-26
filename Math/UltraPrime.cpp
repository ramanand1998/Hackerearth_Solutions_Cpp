#include<iostream>
using namespace std;
int main()
{
    int a[1000007]={0};
    a[0]=a[1]=1;
    for(int i=2;i*i<=1000000;i++)
    {
        if(a[i]==0)
        {
            for(int j=i*i;j<=1000000;j+=i)
                a[j]=1;
        }
    }
    int c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,nc=0,sum=0,sp=0,a2[1000000]={0};
    for(int i=1;i<=1000000;i++)
    {
        sum=0;
        if(a[i]==0)
        {
           nc=i;c1=nc%10;
           if(nc!=0)
           nc=nc/10; 
            sum+=c1;
           c2=nc%10;
           if(nc!=0)
            nc=nc/10;
          sum+=c2;
           c3=nc%10;
           if(nc!=0)
           nc=nc/10;
         sum+=c3;
           c4=nc%10;
           if(nc!=0)
            nc=nc/10;
        sum+=c4;
           c5=nc%10;
            if(nc!=0)
           nc=nc/10;
        sum+=c5;
           c6=nc%10;
            if(nc!=0)
            nc=nc/10;
        sum+=c6;
        }
        if(a[sum]==0)
         sp++;
        a2[i]=sp;
    }
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int l,r;
        scanf("%d%d",&l,&r);
        printf("%d\n",a2[r]-a2[l-1]);
    }
}