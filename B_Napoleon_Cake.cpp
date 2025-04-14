#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long 
#define f first
#define s second
#define endl '\n'
#define pb push_back
#define all(v) (v).begin(),(v).end()
const int mod =1e9+7;
const int N=1e8+2;
#define Pi 2 * acos(0.0);
const string yes="YES",no="NO";

void solve()
{
    int n;
    cin>>n;
    vector<int>v(n),ans(n,0);
    for(int &i:v){
        cin>>i;
    }
    for(int i=0;i<n;i++)
    {
        if(v[i])
        {
            ans[i]++;
            int bk=v[i]-1;
            int l=i-bk-1;
            if(l>=0)
            {
                ans[l]--;
            }
        }
    }
    for(int i=n-2;i>=0;i--)
    {
        ans[i]=ans[i]+ans[i+1];
    }
    for(int i=0;i<n;i++)
    {
        if(ans[i])ans[i]=1;
        cout<<ans[i]<<" ";
    }cout<<endl;
}
signed main()
{
    fast;
    //solve(); return 0;
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        solve();
    }
    return 0;
}