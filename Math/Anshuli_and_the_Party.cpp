#include<iostream>
using namespace std;
#define ulli unsigned long long int
#define p 1000000007
ulli power(ulli x,ulli y)
{
    ulli res=1;
    while(y)
    {
      if(y%2)
      {
          res=(res%p*x%p)%p;
          y--;
      }
      else
      {
          x=(x%p*x%p)%p;
          y=y/2;
      }
    }
    return res;
}
int main()
{
    
    ulli t;
    cin>>t;
    while(t--)
    {
        ulli x=0,y=0;
     string s1,s2;
     cin>>s1>>s2;
     for(ulli i=0;i<s1.length();i++)
     {
         x=((x*10)+s1[i]-48)%(p);
     }
     for(ulli i=0;i<s2.length();i++)
     {
         y=((y*10)+s2[i]-48)%(p-1);
     }
     //cout<<x<<" "<<y<<endl;
     cout<<power(x,y)<<endl;
   
    }
}