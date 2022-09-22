#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,e,i=0;
        cin>>n>>e;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        i=0;
        while(1)
        {
            if(a[0]>=e)
            {
                cout<<i<<endl;
                break;
            }
            a[0]=a[0]+1;
            i++;
        }
    }
}