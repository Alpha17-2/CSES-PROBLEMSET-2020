/*  Author : Alpha_The_Coder
    Created on 09/10/2020      */
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
   int n,weight,ans=0;
   cin>>n>>weight;
   vector<lli>kid(n);
   loop(0,n) cin>>kid[i];
   sort(kid.begin(),kid.end());
   // Two pointer approach
   int i=0,j=n-1;
   while (i<j)
   {
       if(kid[i]+kid[j]<=weight)
       {
           ans++;
           j--;
           i++;
       }
       else
       {
           ans++;
           j--;
       }
   }
   if(i==j || i<j)
   ans++;
   cout<<ans;
   
 
} 
// Solely contributed by Subhojeet Sahoo aka Alpha