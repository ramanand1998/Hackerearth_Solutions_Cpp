#include<bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
    if(n<=1)
    return false;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}
int main()
{
     int n;
    scanf("%d",&n);
    int a[n],i=0,l=0,m=0;

    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
        
    sort(a,a+n);

        for(i=0;i<n;i++)
        {
            if(isprime(a[i]))
            {
                m=a[i];
                break;
            }
        }

        for(i=n-1;i>=0;i--)
        {
            if(isprime(a[i]))
            {
                l=a[i];
                break;
            }
        }

        if(l==0 and m==0)
        printf("%d",-1);
        else
        printf("%d",l-m);
        
}