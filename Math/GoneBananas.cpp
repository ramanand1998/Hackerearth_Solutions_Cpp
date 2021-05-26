#include<iostream>
using namespace std;

string solve (int N,int arr[]) {
   if(arr[N]==0 || N==1)
       return "No";
   else
       return "Yes";
}

int main() {
  int a[1000004]={0};
  a[0]=a[1]=1;
  for(int i=2;i*i<=1000000;i++)
  {
      if(a[i]==0)
      {
        for(int j=i*i;j<=1000000;j+=i)
            a[j]=1;

      }
  }
    int T;
    scanf("%d",&T);
    for(int t_i=0; t_i<T; t_i++)
    {
        int N;
         scanf("%d",&N);

        string out_;
        out_ = solve(N,a);
        cout<<out_<<"\n";
        
    }
}