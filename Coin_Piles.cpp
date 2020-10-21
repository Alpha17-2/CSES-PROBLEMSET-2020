#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b;
        cin>>a>>b;
        long long int  sum=0;
        sum=a+b;
        if(a==0 && b==0)
            cout<<"YES\n";
        else
        {
            sum=a+b;
            if(sum%3==0&( a!=0 && b!=0 ))
                {
                    if(a>b )
                    {  double q=(double)a/(double)b;
                        if( ceil(q)<=2)
                        cout<<"YES\n";
                        else
                         cout<<"\NO\n";
                    }
                    else
                  {double q=(double)b/(double)a;
                    if(ceil (q)<=2)
                        cout<<"YES\n";
                    else
                        cout<<"\NO\n";
                  }
                }
                else
                    cout<<"NO\n";
 
    }
}
}