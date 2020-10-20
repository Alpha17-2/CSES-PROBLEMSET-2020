/*  Author : Alpha_The_Coder
    Created on 20/10/2020      */
#include <bits/stdc++.h>
using namespace std;
#define iamalpha ios_base::sync_with_stdio(false);cin.tie(NULL);
#define loop(a,n) for(int i=a;i<n;i++)
#define nloop(a,n) for(int j=a;j<n;j++)
#define lli long long int
#define even(n) n%2==0?true:false
set<string>ans;
string s;
void createString(int l,int r, string S)
{
     if (l == r)  
        {
            ans.insert(S); 
        } 
    else
    {    
        for (int i = l; i <= r; i++)  
        { 
            swap(S[l], S[i]); 
            createString(l+1 , r ,S);    
            swap(S[l], S[i]);  
        }  
    }  
}

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
    cin>>s;
    int n=s.size();
    createString(0,n-1,s);
    cout<<ans.size()<<"\n";
    for(auto x:ans)
    cout<<x<<"\n";
}
