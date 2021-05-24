#include<bits/stdc++.h>
using namespace std;
#define mode 1000000007
#define ulli unsigned long long int
ulli fastpower(ulli base,ulli power)
{
  ulli result=1;
    while(power)
    {
        if(power%2)
        {
            result=(base*result)%mode;
            power--;
        }
            base=(base*base)%mode;
            power=power/2;
    }
    return result;
}
int main()
{
    ulli n,p=0;
    string s;
    cin>>n>>s;
    for (int i = 0; i < s.length(); i++) 
        p = (p * 10 + s[i] - '0') % (mode - 1);
        
    cout<<fastpower(n,p);
}