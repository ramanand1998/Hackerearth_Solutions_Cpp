#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int parent[N];
void make_set(int a) {
 parent[a]=a;
}
int find_set(int a) {
    if(parent[a] == a)
        return a;

    return parent[a] = find_set(parent[a]);
}
void union_set(int a, int b) {
    a = find_set(a);
    b = find_set(b);

    if(a != b)
    {
        parent[a] = b;
    }
}
int main()
{
    int n,q;
    cin>>n>>q;
    int query_type,a,b;

    for(int i=1;i<=n;i++)
        make_set(i);
        
    for(int i=1;i<=q;i++)
    {
        cin>>query_type;

        if(query_type==1)
        {
            cin>>a>>b;
              
            union_set(a,b);

        }
        else if(query_type==2)
        {
           cin>>a;
           int c = find_set(a);
           parent[c] = a;
           parent[a] = a;


        }
        else{
            cin>>a;
           cout<<find_set(a)<<endl;
        }
        
    }
}