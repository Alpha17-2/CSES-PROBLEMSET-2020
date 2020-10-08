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
   string s;
   cin>>s;
   int n=s.size();
   int longest=1;
   int i=0,j=0;
   while(i<n)
   {
       int m=1;
       char c=s[i];
       for(j=i+1; j<n && s[j]==c ;j++)
        m++;
 
       longest=max(longest,m);
       i=j;
   }
   cout<<longest;
 
}
 
 
 
 
// Solely contributed by Subhojeet Sahoo aka Alpha