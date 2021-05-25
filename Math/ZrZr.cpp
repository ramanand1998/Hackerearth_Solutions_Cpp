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
        int i=0,c=0;
        for(i=0;;i++)
        {
            if(n<5)
            {
                break;
            }
            n=n/5;
            
            c=c+n;
        }
        if(c>0)
        cout<<c<<endl;
        else
        cout<<0<<endl;
    }
}