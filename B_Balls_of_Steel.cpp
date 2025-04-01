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
    int k;
    cin>>n>>k;
    vector<pair<int, int>> a(n);
    for (auto &i : a)
        cin >> i.first >> i.second;
    int ans = -1;
    for (int i = 0; i < n; ++i) {
        int mx = 0;
        for (int j = 0; j < n; ++j) {
            mx = max(mx, abs(a[i].first - a[j].first) + abs(a[i].second - a[j].second));
        }
        if (mx <= k)
        {
            ans = 1;
            break;
        } 
    }
    cout << ans << "\n";
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