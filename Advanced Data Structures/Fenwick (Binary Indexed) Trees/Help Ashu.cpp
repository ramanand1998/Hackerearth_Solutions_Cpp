#include <bits/stdc++.h>
using namespace std;
int a[10000000];
int st[4000000];
int pt[4000000];
void update(int si,int ss,int se,int qi,int v)
{
    if(ss==se)
    {
        if(a[ss]%2==1)
        {
          st[si]=1;
          pt[si]=0;
        }
        else
        {
          pt[si]=1;
          st[si]=0;
          
        }
        a[ss]=v;
        return;
    }
    
    int mid=(ss+se)/2;
    
    if(qi<=mid)
    {
        update(2*si,ss,mid,qi,v);
    }
    else
    {
        update((2*si)+1,mid+1,se,qi,v);
    }
    st[si]=st[2*si]+st[(2*si)+1];
    pt[si]=pt[2*si]+pt[(2*si)+1];
    
}
int query(int si,int ss,int se,int qs,int qe,int qt)
{
    if(ss>qe || se<qs)
      return 0;
    if(qs<=ss && se<=qe)
    {
        if(qt==1)
        return st[si];
        else
        return pt[si];
    }
                                                                                                                                                        
    int mid=(ss+se)/2;
    int l=query(2*si,ss,mid,qs,qe,qt);
    int r=query(2*si+1,mid+1,se,qs,qe,qt);
    return l+r;
}

void segment_tree(int si,int ss,int se)
{
    if(ss==se)
    {
        if(a[ss]%2==0)
        {
        st[si]=1;
        pt[si]=0;
        }
        else
        {
        pt[si]=1;
        st[si]=0;
        }
        return ;
    }
    int mid=(ss+se)/2;
    
    segment_tree(2*si,ss,mid);
    segment_tree((2*si)+1,mid+1,se);
    
    st[si]=st[2*si]+st[(2*si)+1];
    pt[si]=pt[2*si]+pt[(2*si)+1];
}

int main() {
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	cin>>a[i];
	
	segment_tree(1,1,n);
	
/*	for(int i=1;i<=13;i++)
	cout<<pt[i]<<" ";
	
	cout<<endl;
	
	for(int i=1;i<=13;i++)
	cout<<st[i]<<" ";
	*/
    
	int q;
	cin>>q;
//	for(int i=1;i<=7;i++)
//	cout<<st[i]<<" ";
	int qs,qe,qt;
	
	while(q--)
	{
	    
	    cin>>qt>>qs>>qe;
	  //  cout<<qs<<" "<<qe<<endl;
	    if(qt==0)
	    {
	        if(qe%2==a[qs]%2)
	        continue;
	        else
	        {
	           update(1,1,n,qs,qe);  
	        }
	       
	    }
	    else 
	    {
	        cout<<query(1,1,n,qs,qe,qt)<<endl;
	    }
	    
	    
	    
	}
	return 0;
}