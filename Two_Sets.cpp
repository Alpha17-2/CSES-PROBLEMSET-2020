/*  Author : Alpha_The_Coder
    Created on 12/10/2020      */
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
    lli n,sum=0;
    cin>>n;
    sum=(n*(n+1))/2;
    if(even(sum))
    {
        cout<<"YES\n";
        lli half=sum/2;
        map<lli,bool>mymap;
        // By default value for each key is false.
        lli i=n,first_set=0,second_set=0, current_sum=0;
        while (i>0)
        {
           
            if(current_sum+i>=half)
            {
                first_set++;
                mymap[half-current_sum]=true;
                break;
            }
            else
            {
                first_set++;
                current_sum+=i;
                mymap[i]=true;
            }
            --i;
        }
        second_set=n-first_set;
        cout<<first_set<<"\n";
        for (lli c=1;c<=n; c++)
        {
            if(mymap[c])
            cout<<c<<" ";
        }
        cout<<"\n"<<second_set<<"\n";
         for (lli c=1;c<=n; c++)
        {
            if(!mymap[c])
            cout<<c<<" ";
        }
        return;   
    }
    else
    {
        cout<<"NO";
    }
}











int a=10,b=15,sum=0;
sum=a+b; // Calculates in O(1).
cout<<sum;














