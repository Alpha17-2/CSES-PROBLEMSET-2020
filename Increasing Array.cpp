/*  Author : Alpha_The_Coder
    Created on 02/10/2020      */
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
    lli turn=0;
    lli left,right;
    lli dif;
    cin>>left;
    loop(0,n-1)
    {
 
        cin>>right;
        if(left>right)
        {
            dif=left-right;
            turn+=dif;
            left=right+dif;
        }
        else
            left=right;
    }
    cout<<turn;
 
}
 
 
 
 
// Solely contributed by Subhojeet Sahoo aka Alpha