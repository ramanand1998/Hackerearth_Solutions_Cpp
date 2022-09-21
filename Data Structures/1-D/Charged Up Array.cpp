#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
            unsigned long long int l=1,n; 
            cin>>n;
            unsigned long long int a[n],res=0;
            for(int i=0;i<n;i++)
            {
                cin>>a[i];
            }

            if(n<=60)
            {
                for(int i=1;i<n;i++)
                {
                    l=l*2;
                   // cout<<l<<endl;
                }
            }
            if(n<=60)
            {
            for(int i=0;i<n;i++)
                {
                if(a[i]>=l)
                {
                    res=(res+a[i])%1000000007; 
                }
                } 
            }
            else
            {
            res=0;
            }
            cout<<res<<endl;
    }
	return 0;
}