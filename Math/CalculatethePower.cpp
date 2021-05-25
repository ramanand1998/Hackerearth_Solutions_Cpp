#include<bits/stdc++.h>
using namespace std;
#define mode 1000000007;
long long fastpower(long long  base,long long power)
{
    int result=1;
    while(power>0)
    {
        if(power%2==1)
        {
            result=(base*result)%mode;
        }
        base=(base*base)%mode;
        power=power/2;
    }
    return result%mode;
}
int main()
{
    long long n,p;
    cin>>n>>p;
    
    cout<<fastpower(n,p);
}