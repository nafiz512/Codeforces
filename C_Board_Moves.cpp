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
const int N=5*1e5+2;
#define Pi 2 * acos(0.0);
const string yes="YES",no="NO";

vector<int>ans(N,0);
void Calculate()
{
    int dis=1;
    int x=1;
    ans[1]=0;
    for(int i=3;i<N;i+=2)
    {
        ans[i]=ans[i-2]+x*8*dis;
        x++;
        dis++;
    }
}
void solve()
{
    int n;
    cin>>n;
    cout<<ans[n]<<endl;
}
signed main()
{
    Calculate();
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


