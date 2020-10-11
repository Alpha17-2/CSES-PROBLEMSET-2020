/*  Author : Alpha_The_Coder
    Created on 08/10/2020      */
#include <bits/stdc++.h>
using namespace std;
#define iamalpha ios_base::sync_with_stdio(false);cin.tie(NULL);
#define loop(a,n) for(int i=a;i<n;i++)
#define nloop(a,n) for(int j=a;j<n;j++)
#define lli long long int
#define even(n) n%2==0?true:false
void solve();
int main()
{
    iamalpha;
    int t=1;
   // scanf("%d",&t);
    while(t--) {
        solve();
    }
    return 0;
}
void solve()
{
    int n;
    cin>>n;
    vector<lli>a(n);
    loop(0,n) cin>>a[i];
    lli best=a[0];
    lli current=a[0];
    for (int i = 1; i < n; i++)
    {
        current=max(a[i],current+a[i]);
        best=max(best,current);
    }
    cout<<best;
    
}
