/*  Author : Alpha_The_Coder
    Created on 15/10/2020      */
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
    int min_count=1,min1,min2;
    int n,val;
    cin>>n;
    int a[n];
    cin>>a[0];
    min1=a[0];
    loop(1,n)
    {
        cin>>a[i];
        if(a[i]<min1)
        {
            continue;
        }
        else
        {
            
        }
    }
    cout<<min_count;


}
