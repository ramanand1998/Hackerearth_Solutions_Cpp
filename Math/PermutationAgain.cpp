#include<iostream>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x;
        double s=0,n=0;
        unsigned long long c=0;
        scanf("%d",&x);
        if(x>=3)
        {
            if(x%2==0)
            {
                c+=x-1;
                n=(x-2)/2;
                s=n/2;
                s=((n/2)*(4+((n-1)*2)));
                s=(2*s);
                c+=s;
            }
            else
            {
                c+=x;
                n=(x-2)/2;
                s=(n/2)*(6+(n-1)*2);
                s=2*s;
                c+=s;
            }
        }
        else
        c=1;
       printf("%llu\n",c);
    }
}