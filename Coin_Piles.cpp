/*  Author : Alpha_The_Coder
    Created on 21/10/2020      */
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
    scanf("%d",&t);
    while(t--) {
        solve();
    }
    return 0;
}
void solve()
{  
 
 lli a,b;
 cin>>a>>b;
 lli sum=a+b;
 if( a<=b*2 && (sum)%3 == 0 && b<=a*2) cout<<"YES\n";
 else cout<<"NO\n";
}
