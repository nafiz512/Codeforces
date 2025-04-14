#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long 
#define ff first
#define sc second
#define endl '\n'
#define pb push_back
#define all(v) (v).begin(),(v).end()
#define Pi 2.0 * acos(0.0)
const int mod =1e9+7;
const int N=2*1e6+2;
const string yes="YES",no="NO";
//cout << fixed << setprecision(20) << p << endl;

// modinverse
void solve()
{
    int n;
    cin>>n;
    vector<bool>vis(n*2+2,false);
    set<int>st;
    vector<int>ans;
    for(int i=1;i<=n*n;i++)
    {
        int x;
        cin>>x;
        if(vis[x]==false)
        {
            vis[x]=true;
            ans.pb(x);
        }
    }
    for(int i=1;i<=n*2;i++)
    {
        st.insert(i);
    }
    for(int i=0;i<ans.size();i++)
    {
        st.erase(ans[i]);
    }
    for(auto it:st)
    {
        cout<<it<<' ';
    }
    for(auto it:ans)
    {
        cout<<it<<' ';
    }
    cout<<endl;
}
signed main()
{
    //fast;
    //solve(); return 0;
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        solve();
    }
    return 0;
}