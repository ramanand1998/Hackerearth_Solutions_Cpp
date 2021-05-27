#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[1000007]={0};
    a[0]=a[1]=1;
    for(int i=2;i*i<=1000000;i++)
    {
        if(a[i]==0)
        {
            for(int j=i*i;j<=1000000;j+=i)
            {
                a[j]=1;
            }
        }
    }

    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(a[n]==0)
        {
            cout<<"Arjit"<<endl;
        }
        else
        {
            cout<<"Deepa"<<endl;
        }
    }
}