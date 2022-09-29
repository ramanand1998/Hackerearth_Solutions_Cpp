#include <bits/stdc++.h>
using namespace std;
long sum(int bit[], int i)
{
	long sum = 0;

	while(i>0)
	{
		sum+= bit[i];
		i-= i&(-i);
	}
	//cout<<sum<<" ";
	return sum;
}
void update(int bit[],int mx,int i,int val)
{
		while(i<mx)
		{
			bit[i]+= val;
			i+= i & (-i);
		}
}
long getInvCount(int bit[],int n,int mx,int a[],int b[])
{
   long invCount = 0;
	for(int i = n-1; i>=0; i--)
	{
		invCount+= sum(bit, a[i]-1);

		update(bit, mx, b[i], 1);
	}

	return invCount;
}
int main() {
	
	int n;
	cin>>n;
	int a[n],b[n];
	int mx=0;
	for(int i=0;i<n;i++)
	{
	cin>>a[i];

	mx = max(mx, a[i]);
	}

	for(int i=0;i<n;i++)
	{
	cin>>b[i];
	mx = max(mx, a[i]);
	}

	int bit[mx+1];
	for(int i=0;i<= mx; i++)
	bit[i] = 0;

	cout<<getInvCount(bit, n, mx, a, b);




}