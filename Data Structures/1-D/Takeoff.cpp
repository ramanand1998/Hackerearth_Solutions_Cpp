#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>d>>a>>b>>c;
        int e[d+1]={0},i=0,l=0;
        l=0;
        for(i=1;i<=d;i++)
        {
            if(i%a==0)
            {
                e[i]++;
            }
            if(i%b==0)
            {
                e[i]++;
            }
            if(i%c==0)
            {
                e[i]++;
            }
        }
        for(i=1;i<=d;i++)
        {
            if(e[i]==1)
            {
                l++;
            }
        }
        cout<<l<<endl;
    }
}