#include<bits/stdc++.h>
using namespace std;
#define all(a) a.begin(),a.end()

const int N = 1e5+5;

int a[N], b[N];



bitset<5001> tree_a[4*N+5],tree_b[4*N+5];

void build_a(int s, int e, int node_a)
{
    if(s==e)
    {
        tree_a[node_a].set(a[s]);
        return;
    }

    int mid = (s+e)/2;

    build_a(s,mid,node_a*2);
    build_a(mid+1,e,node_a*2+1);
    tree_a[node_a]= tree_a[node_a*2] | tree_a[node_a*2+1];
   
    return;

}
void build_b(int s, int e, int node_b)
{
    if(s==e)
    {
        tree_b[node_b].set(b[s]);
        return;
    }

    int mid = (s+e)/2;

    build_b(s,mid,node_b*2);
    build_b(mid+1,e,node_b*2+1);
    tree_b[node_b]= tree_b[node_b*2] | tree_b[node_b*2+1];
    return;

}

bitset<5001> query_a(int s,int e, int qs, int qe,int node_a)
{
    if(qs>qe or s>qe or e<qs)
    {
        bitset<5001> s1;
        return s1;
    }
    if(s>=qs and e<=qe)
    return tree_a[node_a];

    int mid = (s+e)/2;

    bitset<5001> left = query_a(s,mid,qs,qe,node_a*2);
    bitset<5001> right = query_a(mid+1,e,qs,qe,node_a*2+1);
    return left | right;

}
bitset<5001>  query_b(int s,int e, int qs, int qe,int node_b)
{
    if(qs>qe or s>qe or e<qs)
    {
        bitset<5001> s1;
        return s1;
    }
    if(s>=qs and e<=qe)
    return tree_b[node_b];

    int mid = (s+e)/2;

    bitset<5001> left = query_b(s,mid,qs,qe,node_b*2);
    bitset<5001> right = query_b(mid+1,e,qs,qe,node_b*2+1);
    return left | right;

}

int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    cin>>a[i];

    for(int i=1;i<=n;i++)
    cin>>b[i];

    build_a(1,n,1);
    build_b(1,n,1);
    int q;
    cin>>q;
    while(q--)
    {
        int l1,r1,l2,r2;
        cin>>l1>>r1>>l2>>r2;

        bitset<5001> ans1= query_a(1,n,l1,r1,1);
        bitset<5001> ans2 = query_b(1,n,l2,r2,1);
        ans1 = ans1|ans2;
        cout<<ans1.count()<<endl;
    }
    // for(int i=1;i<13;i++)
    // {
    //     cout<<tree_a[i].size()<<" ";
    // }
}

