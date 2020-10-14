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
  lli target;
  cin>>target;
  // Hashing Approach
  map<lli,int>mymap;
  lli val;
  cin>>val;
  mymap[val]=1;
  for (int i = 2; i <=n ; i++)
  {
     cin>>val;
     if(mymap.find(target-val)!=mymap.end())
     {
         cout<<i<<" "<<mymap[target-val];
         return;
     }
     else
     {
         mymap[val]=i;
     }
     
  }
  cout<<"IMPOSSIBLE";
}