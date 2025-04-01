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
    vector<int>v;
    set<int>st;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st.insert(x);
    }
    for( int i:st)
    {
        v.pb(i);
    }
    sort(all(v),greater<int>());
    int ned=n/2;
    for(int i=0;i<v.size() && ned>0;i++)
    {
        ned--;
        cout<<v[i]<<" "<<v[v.size()-1]<<endl;
    }
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