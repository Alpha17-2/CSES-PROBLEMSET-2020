/*  Author : Alpha_The_Coder
    Created on 02/10/2020      */
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
    while(t--) {
        solve();
    }
    return 0;
}
void solve()
{
   int n; cin>>n;
   if(n<=3)
   {
        if(n==1)  printf("1");
        else  printf("NO SOLUTION");
   }
   else{
    vector<int>evenvec;
    vector<int>oddvec;
    loop(1,n+1) {
        if(even(i))  evenvec.push_back(i);
        else oddvec.push_back(i);
    }
     for(auto x:evenvec)  printf("%d ",x);
     for(auto x:oddvec)  printf("%d ",x);
   }
}
 
// Solely contributed by Subhojeet Sahoo aka Alpha