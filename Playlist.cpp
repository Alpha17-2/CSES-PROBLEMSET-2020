/*  Author : Alpha_The_Coder
    Created on 14/10/2020      */
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
   int n,val;
   cin>>n;
   vector<int>list(n);
   map<int,int>mymap;
   int count=0,ans=INT_MIN;
   loop(0,n) cin>>list[i]; 
   int i=0,j=0;
   int max_len=INT_MIN;
   for(i=0; j<n ;i++)
   {
       while (j<n && mymap[list[j]]<1)
       {
           mymap[list[j]]++;
           j++;
       }
       max_len=max(max_len,(j-i));
       mymap[list[i]]--;
    }
    cout<<max_len;
}
