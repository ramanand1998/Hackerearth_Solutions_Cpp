#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],i=0,sum=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
        a[i]=sum;
    }
    int q;
    cin>>q;
    while(q--)
    {
        int l;
        cin>>l;
        if(sum>=l)
        {
        for(i=0;i<n;i++)
        {
            if(a[i]>=l)
            {
                cout<<i+1<<endl;
                break;
            }
        }
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    
}