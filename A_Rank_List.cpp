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

bool comp(pair<int,int>p1,pair<int,int>p2)
{
    if(p1.ff!=p2.ff)
        return p1.ff>p2.ff;
    return p1.sc<p2.sc;
}
void solve()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<pair<int,int>>vpii;
    map<pair<int,int>,int>mp;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        vpii.pb({a,b});
        mp[{a,b}]++;
    }
    sort(all(vpii),comp);
    pair<int,int>pii=vpii[k-1];
    cout<<mp[pii]<<endl;
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