#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>m>>n;
    priority_queue<int>q;
    int num;
    for(int i=0;i<m;i++)
    {
        cin>>num;
      q.push(num);
    }
    long long sum=0;
    while(q.top()>0 && n>0)
    {
        num=q.top();
        sum+=num;
        num--;
        q.pop();
        q.push(num);
        n--;
    }
   
    cout<<sum;
}