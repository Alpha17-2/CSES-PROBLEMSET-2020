/*  Author : Alpha_The_Coder
    Created on 22/10/2020      */
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
   int n; cin>>n;
   vector<lli>book(n);
   lli sum=0;
   loop(0,n) {
       cin>>book[i];
       sum+=book[i];
   }
   sort(book.begin(),book.end());
   lli sum_till_last=sum-book[n-1];
   if(sum_till_last<book[n-1]) cout<<book[n-1]*2L;
   else cout<<sum;
}
