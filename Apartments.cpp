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
    while(t--) {
        solve();
    }
    return 0;
}
void solve()
{
   int n,m,k;
   cin>>n>>m>>k;
   vector<lli> person(n);
   vector<lli> apartment(m);

   loop(0,n)  cin>>person[i];
   loop(0,m)  cin>>apartment[i];

   sort(person.begin(),person.end());
   sort(apartment.begin(),apartment.end());

   lli ans=0;
   int i=0,j=0;
   for(i=0; i<n && j<m; ++i)
   {
       while(j<m)
       {
            if(abs(apartment[j]-person[i])<=k)
            {
               ans++; j++;
               break;
            }

            if(person[i]+k<apartment[j])
            break;

            j++;
       }
   }
   printf("%lli",ans);
}
