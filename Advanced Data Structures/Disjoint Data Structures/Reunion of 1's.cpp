#include<bits/stdc++.h>
using namespace std;
const int N=1000000;
int parent[N];
int size[N];
int m=0;
void make_set(int a)
{
   parent[a]=a;
   size[a]=1; 
   m = max(m, size[a]);
}
int find_set(int a)
{
    if(parent[a]==a)
    {
        return a;
    }
    return parent[a] = find_set(parent[a]);
  
}
int union_set(int a,int b)
{
     a=find_set(a);
     b=find_set(b);

     if(a!=b)
     {
         if(a<b)
             swap(a,b);

          parent[b]=a;   
         size[a]+=size[b];

         if(size[a]>m)
         m=size[a];
     }

}
int main()
{
  int n,q;
  cin>>n>>q;
  string s;
  cin>>s;
  for(int i=0;i<s.length();i++)
  {
      if(s[i]=='1')
      {
          make_set(i);
      }
  }
  for(int i=0;i<s.length()-1;i++)
  {
      if(s[i]=='1' && s[i+1]=='1')
      {
         union_set(i,i+1);
      }
  }

  for(int i=1;i<=q;i++)
  {
      int a;
      cin>>a;
      if(a==1)
      {
          cout<<m<<endl;
      }
      else
      {
          int b;
          cin>>b;
          b--;
          if(s[b]!='1')
          {
              make_set(b);
              s[b]='1';
              if(b>0 && s[b-1]=='1')
              {
                  union_set(b,b-1);
              }
              if(b<n-1 && s[b+1]=='1')
              union_set(b,b+1);
          }
      }
  }
}