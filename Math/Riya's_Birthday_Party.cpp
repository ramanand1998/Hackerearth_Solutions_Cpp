#include<bits/stdc++.h>
using namespace std;
#define p 1000000007
#define ll unsigned long long int
int main()
{
    
    
    int t;
    cin>>t;
   
    while(t--)
    {
        ll n;
        cin>>n;
       cout<<((((n%p)*(n%p))%p)+((n%p)*((n-1)%p)%p))%p<<endl;
    }
     
    
     
}