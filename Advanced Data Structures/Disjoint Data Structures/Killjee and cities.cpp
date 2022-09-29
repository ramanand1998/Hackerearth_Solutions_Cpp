#include<bits/stdc++.h>
using namespace std;
const int N= 2e6 + 10;
int parent[N];
int size[N];
int ans = 0;
void make_set(int v)
{
    parent[v] = v;
    size[v] = 1;
}
int find_set(int a)
{
   if(a == parent[a])
   return a;
   return parent[a] = find_set(parent[a]);
      
}
void union_set(int a,int b)
{
   a=find_set(a);
   b=find_set(b);
   if(a!=b)
   {
      if(size[a] < size[b])
         swap(a,b);
      
     parent[b]=a;
     size[a] += size[b];
     ans--;
   }

}
int main()
{
   //make_set();
   int n,m;
   cin>>n>>m;
   int s;
   cin>>s;
   int a,b;
   ans = n-1;
   for(int i=1;i<=n;i++)
   make_set(i);

   for(int i=1;i<=m;i++)
   {
      cin>>a>>b;
      union_set(a,b);
      
   }
   
   int q;
   cin>>q;
   cin>>s;
   
   for(int i=1;i<=q;i++)
   {
      cin>>a>>b;
      union_set(a,b);
      
      cout<<ans<<" ";
   }



}