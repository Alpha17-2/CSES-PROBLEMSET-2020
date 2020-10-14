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
    int n;
     lli cost1=0,cost2=0;
    cin>>n;
    vector<int>sticks(n);
    map<int,int>mymap;
    int mx=INT_MIN,ans=0;
    loop(0,n)
    {
        cin>>sticks[i];
        mymap[sticks[i]]++;
        if(mymap[sticks[i]]>mx)
        {
            mx=mymap[sticks[i]];
            ans=sticks[i];
        }
    }
        loop(0,n)
            cost1+=abs(sticks[i]-ans);     
        sort(sticks.begin(),sticks.end());
          int pos=n/2;
        loop(0,n)
            cost2+=abs(sticks[pos]-sticks[i]);

     cout<<min(cost1,cost2);   
}
