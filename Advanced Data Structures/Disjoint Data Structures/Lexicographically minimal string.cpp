#include<bits/stdc++.h>
using namespace std;
const int N=27;
int parent[N];
void make_set(int a) {
   parent[a] = a;
}

int find_set(int a) {
   if(parent[a]==a)
   return a;

   return parent[a] = find_set(parent[a]);
}

void union_set(int a, int b) {

   a = find_set(a);
   b = find_set(b);

   if(a!=b) {
      if(a>b)
         swap(a,b);

      parent[b] = a;   
   }
}

string Solution (string A, string C, string B) {

   int n  = A.length();

   for(int i=1;i<=26;i++)
   make_set(i);

   for(int i=0;i<n;i++) {
      int num1=(A[i]-'a')+1;
      int num2=(B[i]-'a')+1;
      union_set(num1,num2);
   }

   string s="";
   
   for(int i=0;i<C.length();i++) {
      int num = (C[i]-'a')+1;
      num = find_set(num);
      char ch = 'a'+(--num);
       s+=ch;
   }
   return s;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    string A;
    getline(cin, A);
    string B;
    getline(cin, B);
    string C;
    getline(cin, C);

    string out_;
    out_ = Solution(A, C, B);
    cout << out_;
}