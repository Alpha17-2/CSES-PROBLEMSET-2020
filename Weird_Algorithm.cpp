/*  Author : Alpha_The_Coder
    Created on 27/09/2020      */
#include <bits/stdc++.h>
using namespace std;
#define iamalpha ios_base::sync_with_stdio(false);cin.tie(NULL);
#define loop(a,n) for(int i=a;i<n;i++)
#define nloop(a,n) for(int j=a;j<n;j++)
#define lli long long int
lli mod=1000000007;
void solve();
 
int main()
{
    iamalpha;
    int t=1;
   // scanf("%d",&t);
    while(t--)
    {
        solve();
    }
    return 0;
}
 
void solve()
{
    lli n;
    cin>>n;
    cout<<n<<" ";
    while(true)
    {
        if(n==1)
        {
            break;
        }
        else if(n%2==0)
            n=(n/2);
        else
            n=(n*3)+1;
 
        cout<<n<<" ";
    }
 
}
 
 
 
 
// Solely contributed by Subhojeet Sahoo aka Alpha