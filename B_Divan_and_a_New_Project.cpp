#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long 
#define ff first
#define sc second
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
    cin >> n;
    vector<int> v(n);
    multiset<int, greater<int>> msi;
    for (int &i : v) {
        cin >> i;
        msi.insert(i * 2);
    }
    multimap<int, int> mii;
    int l = 1, r = 1, i = 1;
    while (!msi.empty()) {
        auto it = msi.begin();
        
        if (i % 2) {  
            mii.insert({*it, l++});
        } else {
            mii.insert({*it, -r++});
        }
        
        i++;
        msi.erase(it);
    }
    int ans = 0;
    for (auto it : mii) {
        ans += it.ff * abs(it.sc);
    }
    cout << ans << endl << 0 << " ";
    for (int i = 0; i < n; i++) {
        auto it = mii.lower_bound(v[i] * 2);
        cout << it->second << " ";
        mii.erase(it);
    }
    cout << endl;
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