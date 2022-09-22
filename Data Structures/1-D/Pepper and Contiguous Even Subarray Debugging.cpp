#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],i=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int c=0,m=0;
        for(i=0;i<n;i++)
        {
            if(a[i]%2==0)
            {
                c++;
                m=max(m,c);
            }
            else
                c=0;
        }
        if(m>0)
        cout<<m<<endl;
        else
        cout<<"-1"<<endl;
    }
}