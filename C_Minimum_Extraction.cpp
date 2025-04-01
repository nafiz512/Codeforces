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
const int N=1e6+2;
#define Pi 2.0 * acos(0.0);
const string yes="YES",no="NO";

//cout << fixed << setprecision(20) << p << endl;
//bigmod //gcd // modinverse


void solve()
{
    int n;
    cin>>n;
    int mn=(1e9+1);
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        mn=min(mn,v[i]);
    }
    sort(all(v),greater<int>());
    int minSum=0;
    int ans=mn;
    for(int i=n-1;i>=0;i--)
    {
        mn=v[i]-minSum;
        minSum+=mn;
        ans=max(ans,mn);
    }
    cout<<ans<<endl;
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