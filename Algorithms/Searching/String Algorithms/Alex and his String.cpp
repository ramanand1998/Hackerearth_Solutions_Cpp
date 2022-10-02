#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int k;
    cin>>k;
    int n,ind;
    char ch;
    string s1;
     int ep=s.length()-1;
    for(int i=0;i<=ep;i++)
    {
        ch='z';
       n=s.length();
       k=min(k,n);
        for(int j=0;j<k;j++)
        {
            if(s[j]<=ch)
            {
                ch=s[j];
                ind=j;
            }
        }
        cout<<endl;
      s1+=s[ind];
      s.erase(ind,1);
    }
    cout<<s1<<endl;
    return 0;
}