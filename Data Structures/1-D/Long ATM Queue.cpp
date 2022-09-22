#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,l=0,c=0;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n<l)
        {
            c++;
        }
        l=n;
    }
    cout<<c+1;
}