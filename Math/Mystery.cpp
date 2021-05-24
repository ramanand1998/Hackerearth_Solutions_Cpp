#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,c=2;
        scanf("%d",&n);
        if(n==1)
        cout<<1<<endl;
        else
        {
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
             if(i==(n/i))
               {
                   c++;
               }
               else
               {
                   c=c+2;
               }
            }  
           
        }
        printf("%d\n",c);
        }
    }
}