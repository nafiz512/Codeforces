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
    int q;
    cin>>q;
    vector<vector<int>>v(51,vector<int>(1,mod));
    set<int>st;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        v[x][0]=min(v[x][0],i);
        st.insert(x);
    }
    for(int i=0;i<q;i++)
    {
        int x;
        cin>>x;
        int cur=v[x][0];
        v[x][0]=1;
        cout<<cur<<' ';
        for(int ch:st)
        {
            if(ch==x || v[ch][0]>cur)
                continue;
            v[ch][0]++;
        }
    }
    cout<<endl;
}
signed main()
{
    //fast;
    solve(); return 0;
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        solve();
    }
    return 0;
}