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
    string s;
    cin>>s;
    vector<char>even_char;
    vector<char>odd_char;
    map<char,int>mymap;
    for(char c:s)
    {
       mymap[c]++;
    }
    for(auto x:mymap)
    {
        if(x.second%2==0)
        even_char.push_back(x.first);
        else
        odd_char.push_back(x.first);
    }
    if(odd_char.size()>1)
    cout<<"NO SOLUTION";
    else
    {
        string ans="";
        for(char c:even_char)
        {
            loop(0,mymap[c]/2)
                ans+=c;
        }
        for(char c:odd_char)
        {
            loop(0,mymap[c])
            ans+=c;
        }
        for(int i=even_char.size()-1;i>=0;i--)
        {
            char c=even_char[i];
            loop(0,mymap[c]/2)
            ans+=c;
        }
        cout<<ans;
    }
    
    




}
