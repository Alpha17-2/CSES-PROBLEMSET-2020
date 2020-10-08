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
 
        int n;
        cin>>n;
        map<int,int>mymap;
        int val;
        loop(0,n-1)
        {
            cin>>val;
            mymap[val]=1;
        }
         loop(1,n+1)
         {
             if(mymap[i]==0)
             {
                 cout<<i;
                 break;
             }
         }
 
}
 
 
 
 
// Solely contributed by Subhojeet Sahoo aka Alpha