#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<int> vi;
#define pb push_back
const ll INF=1e18;
const int mod=1000000007;
char str[100009];
int main()
{
    ll t,n,m,i,j,k;
    scanf ("%lld",&t);
    while (t--)
    {
        scanf ("%s",str);
        ll st[5],ed[5],f=0;
        for (i=0;i<5;++i)
        {
            st[i]=-1;
            ed[i]=-1;
        }
        for (i=0;str[i]!='\0';++i)
        {
            if (str[i]=='a')
            {
                if (st[0]==-1)
                    st[0]=i;
                ed[0]=i;
            }
            else if (str[i]=='e')
            {
                if (st[1]==-1)
                    st[1]=i;
                ed[1]=i;
            }
            else if (str[i]=='i')
            {
                if (st[2]==-1)
                    st[2]=i;
                ed[2]=i;
            }
            else if (str[i]=='o')
            {
                if (st[3]==-1)
                    st[3]=i;
                ed[3]=i;
            }
            else if (str[i]=='u')
            {
                if (st[4]==-1)
                    st[4]=i;
                ed[4]=i;
            }
        }
        k=ed[0];
        for (i=1;i<5;++i)
        {
            if (st[i]!=-1)
            {
                if (k<st[i])
                    k=ed[i];
                else
                    f=1;
            }
        }
        if (f==1)
        {
            k=ed[4];
            for (i=3;i>=0;--i)
            {
                if (st[i]!=-1)
                {
                    if (k<st[i])
                        k=ed[i];
                    else
                        f=2;
                }
            }
        }
        if (f==0)
            puts ("Good");
        else if (f==1)
            puts ("Worst");
        else
            puts ("Bad");
    }
	return 0;
}