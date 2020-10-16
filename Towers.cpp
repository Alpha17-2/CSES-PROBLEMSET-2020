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
  
  int n;
  cin>>n;
  int val;
  cin>>val;
  vector<int>tower;
  tower.push_back(val);
  loop(1,n)
  {
      cin>val;
      int number_of_towers=tower.size();
      int pos=upper_bound(tower.begin(),tower.end(),val)-tower.begin();
      if(pos==number_of_towers) // Not found
      {
        tower.push_back(val);
      }
      else
      {
          tower[pos]=val;
      }
  }
  cout<<tower.size();
}



    
// 3 8 2 1 5  , size = 1

// 3 




















