    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int n,f=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='H' && s[i+1]=='H')
            {
                f=1;
            }
            if(s[i]=='.')
            {
                s[i]='B';
            }
        }
        if(f==0)
        {
          cout<<"YES"<<endl;    
          cout<<s<<endl;  
        }
        else
        {
            cout<<"NO"<<endl;
            
        }
        
    }