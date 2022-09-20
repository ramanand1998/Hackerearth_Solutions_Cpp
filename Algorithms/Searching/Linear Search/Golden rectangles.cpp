#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,c=0;
    cin>>t;
    double w,h,f;
    while(t--)
    {
        cin>>w>>h;
        f=max(w,h)/min(w,h);
        //cout<<f;
        if(f>=1.60 && f<=1.70)
        {
            c++;
        }
    }
    cout<<c;
}