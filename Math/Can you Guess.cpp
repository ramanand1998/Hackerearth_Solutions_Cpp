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
        long long c=0;
        for(int i=1;i<=n/2;i++)
        {
            if(n%i==0)
            {
                c+=i;
            }
        }
        cout<<c<<endl;
    }
}