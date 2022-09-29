#include<bits/stdc++.h>
using namespace std;
const int N=1e6;
int parent[N];
int size[N];
void make_set(int a) {
    parent[a]=a;
    size[a]=1;
}

int find_set(int a) {
    if(parent[a]==a)
    return a;
    return parent[a]=find_set(parent[a]);
}

void union_set(int a, int b) {

        a = find_set(a);
        b = find_set(b);

        if(a!=b) {
            if(size[a]<size[b])
            swap(a,b);

            parent[b]=a;
            size[a]+=size[b];
        }
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
      int n,m;
      cin>>n>>m;

      for(int i=1;i<=n;i++)
      make_set(i);

    int a,b;

      for(int i=1;i<=m;i++)
      {
         cin>>a>>b;
         union_set(a,b);
      }

    map<int,int>ma;

    for(int i=1;i<=n;i++)
    {
       a=find_set(i);
       ma[a]=size[a];
    }
    vector<int>v;

    for(auto i:ma)
    v.push_back(i.second);

    long long sum=0;

    for(int i=0;i<v.size();i++)
        for(int j=i+1;j<v.size();j++)
           sum+=((v[i]*v[j])*2);

cout<<sum<<endl;
  }
}