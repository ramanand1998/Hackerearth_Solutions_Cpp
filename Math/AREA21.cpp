#include<bits/stdc++.h>
using namespace std;
int main()
{
int a1[1000009]={0};
a1[0]=1;
a1[1]=1;
        for(int i=2;i*i<1000000;i++)
        {
            if(a1[i]==0)
            {
                for(int j=i*i;j<1000000;j+=i)
                {
                a1[j]=1;
                }
            }
        }
int n,q;
scanf("%d%d",&n,&q);

int a[n],ans[n];
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
    
    if(i==0)
    {
        if(a1[a[i]]==0)
        ans[i]=1;
    }
    else
    {
        ans[i]=ans[i-1];
        if(a1[a[i]]==0)
        ans[i]++;
    }
}


while(q--)
{
    int l,r,c=0;

    scanf("%d%d",&l,&r);

    l--,r--;
    //cout<<ans[r]<<" "<<ans[l];
    c=ans[r]-ans[l];

    if(a1[a[l]]==0)
    c++;

    printf("%d\n",c);
}
}