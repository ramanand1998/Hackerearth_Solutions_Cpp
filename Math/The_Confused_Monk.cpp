#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long int
#define md 1000000007

ull me(ull x,ull n)
{
    ull z=1;
    while(n>0){
        if(n&1)
        {
            z=(z*x)%md;
        }
        x=(x*x)%md;
        n=n/2;
    }
    return z;

}
int main()
{
    int n;
    cin>>n;
    unsigned long long int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
   ull b,c;
   b=a[0],c=a[0];
    for(int i=1;i<n;i++)
    {
        b=__gcd(b,a[i]);
        c=(c*a[i])%md;
    }
    
    printf("%d",me(c,b));
    
}