/*  Author : Alpha_The_Coder
    Created on 13/10/2020      */
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
    int n,a,d,current_people=0,mx=INT_MIN,index=0;
    cin>>n;
    int total_time=2*n;
    pair<int,char>customers[total_time];
    for (int i = 0;i < n; i++)
    {
       cin>>a;
       customers[index].first=a;
       customers[index].second='a';  // a denotes arrival 
       index++;
       cin>>d;
       customers[index].first=d;
       customers[index].second='d'; // d denotes departure
       index++; 
    }
    sort(customers,customers+total_time);
    int i=0,j=0,count;
    while (i<total_time)
    {
        if(customers[i].second=='a')
        {
           ++current_people; // A customer arrived 
        }
        else
        {
            mx=max(current_people,mx);
            --current_people; // A customer departed 
        }
        ++i;
    }
    cout<<mx;
    
    
}
