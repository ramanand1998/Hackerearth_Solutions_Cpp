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
        sum=(sum*10+a[i])%11;
    }
    if(sum%11==0)
        cout<<"YES";
    else
    cout<<"NO";
   
}