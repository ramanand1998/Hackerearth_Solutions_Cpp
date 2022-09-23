#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    vector<long long int> v(n);
    long long int mx=LLONG_MIN;
    for(int i=0;i<n;i++)
    {
        scanf("%lli",&v[i]);
    }
    for(int i=0;i<n and i<k+1;i++)
    {
        if(i!=k-1)
        mx=max(mx,v[i]);
    }
    if(n==1 and k%2==1)
    printf("-1");
    else
   printf("%lli",mx);
}