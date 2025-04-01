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
const int N=1e5+2;
#define Pi 2 * acos(0.0);
const string yes="YES",no="NO";

vector<int>tree[N];
vector<int>depth(N,1);
vector<bool>vis(N,0);
void dfs(int vertex)
{
    vis[vertex]=true;
    for(int child: tree[vertex])
    {
        if(vis[child])continue;
        dfs(child);
        depth[vertex]=max(depth[vertex],depth[child]+1);
    }
}
void solve()
{
    int n;
    cin>>n;
    int ans=1;
    vector<int>v(n+1);
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;v[i]=x;
        if(x==-1)continue;
        tree[i].pb(x);
        tree[x].pb(i);
    }
    for(int i=1;i<=n;i++)
    {
        if(v[i]==-1)dfs(i);
    }
    for(int i=1;i<=n;i++)
    {
        ans=max(ans,depth[i]);
    }
    cout<<ans<<endl;
}
signed main()
{
    //fast;
    solve(); return 0;
    // int t;
    // cin>>t;
    // for(int i=1;i<=t;i++)
    // {
    //     solve();
    // }
    return 0;
}