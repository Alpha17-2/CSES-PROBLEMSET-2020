/*  Author : Alpha_The_Coder
    Created on 25/10/2020      */
#include <bits/stdc++.h>
using namespace std;
#define iamalpha ios_base::sync_with_stdio(false);cin.tie(NULL);
#define loop(a,n) for(int i=a;i<n;++i)
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
    vector<lli>a(n);
    loop(0,n) {
        cin>>a[i];
    }
    int total= (n * (n-1) )/2;
    pair<lli,pair<int,int>>p[total];
    map<lli,vector<int>>positions;
    int current_index=0;
    for(int i=0;i<n;++i)
    {
        for(int  j=i+1;j<n;++j)
        {
            lli sum=a[i]+a[j];
            if(positions.find(target-sum)!=positions.end())
            {
               auto it=positions.find(target-sum);
               for(int k=0;k<it->second.size();k++)
               {
                   int index=it->second[k];
                   int a=i;
                   int b=j;
                   int c=p[index].second.first;
                   int d=p[index].second.second;
                   if(a!=c && a!=d && b!=c && b!=d)
                   {
                       cout<<a+1<<" "<<b+1<<" "<<c+1<<" "<<d+1;
                       return;
                   }

               }
            }

            p[current_index].first=sum;
            p[current_index].second.first=i;
            p[current_index].second.second=j;
             positions[sum].push_back(current_index);
            ++current_index;
           
        }
    }
   
    cout<<"IMPOSSIBLE";  
}
