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
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(all(v));
    vector<int>ans(n,0);
    int l=0;
    for(int i=1;i<n;i+=2)
    {
        ans[i]=v[l];l++;
    }
    for(int i=0;i<n;i+=2)
    {
        ans[i]=v[l];l++;
    }
    int cont=0;
    for(int i=1;i<n-1;i++)
    {
        if(ans[i]<ans[i-1] && ans[i]<ans[i+1])cont++;
    }
    cout<<cont<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<' ';
    }cout<<endl;
}
signed main()
{
    fast;
    solve(); return 0;
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        solve();
    }
    return 0;
}