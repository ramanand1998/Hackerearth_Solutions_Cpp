#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,g;
        cin>>n>>x;
        set<int>s;
        for(int i=0;i<n;i++)
        {
               cin>>g;
               s.insert(g);
        }
        if(s.size()==x)
        cout<<"Good"<<endl;
        else if(s.size()>x)
        cout<<"Average"<<endl;
        else
        cout<<"Bad"<<endl;
    }
}