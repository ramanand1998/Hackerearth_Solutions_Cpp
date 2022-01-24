#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)AA
    {
        int n;
        cin>>n;
        int a=0,b=0,s=0,s1=0,s2=0;
        s=n-1;
        a=(s*(s+1))/2;
        a=a/n;
        a=((a*a)*n);
        s2+=(s*(s+1)*(2*s+1))/6;
        
        cout<<a<<" "<<s2<<endl;
    }
} 