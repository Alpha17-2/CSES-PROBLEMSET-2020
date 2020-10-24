/*  Author : Alpha_The_Coder
    Created on 23/10/2020      */
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
    pair<lli,int>a[n];
    loop(0,n) {
        lli val;
        cin>>val;
        a[i].first=val;
        a[i].second=i;
    }
    sort(a,a+n);
    for(int i=0;i<n;++i)
    {
        for(int j=i+1;j<n;++j)
        {
            for (int k = j+1; k < n; ++k)
            {
                lli current_sum=a[i].first+a[j].first+a[k].first;
                int l=n-1;
                while (l>k && current_sum+a[l].first>target)
                {
                    --l;
                }
                if(l>k && current_sum+a[l].first==target)
                {
                    cout<<a[i].second+1<<" "<<a[j].second+1<<" "<<a[k].second+1<<" "<<a[l].second+1;
                    return;
                }
            }
            
            
        }
    }
    cout<<"IMPOSSIBLE";
       
}
