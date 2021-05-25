#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long a1[10000001]={1},a2[10000001]={0};
    a1[0]=0;
    a1[1]=0;
     for(int j=0;j<=10000000;j++)
             {
                 a2[j]=1;
                 a1[j]=1;
             }
    for(int i=2;i*i<=10000000;i++)
    {
         if(a1[i]==1)
         {
             //a2[i]++;
             for(int j=i*i;j<=1000000;j+=i)
             {
                 if(a1[j]==1 && j<=1000000)
                 a2[i]++;
                 a1[j]=0;

             }
         }
    }
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        cout<<a2[n]<<endl;
        
    }
}