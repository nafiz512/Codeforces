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
#define Pi 2 * acos(0.0);
const string yes="YES",no="NO";
//fake_confidence

void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int &i:v){
        cin>>i;
    }
    vector<int>ans(n,0);
    int mx=v[0];
    ans[0]=mx;
    for(int i=1;i<n;i++)
    {
        ans[i]=mx+v[i];
        mx=max(mx,ans[i]);
    }
    for(int &i:ans){
        cout<<i<<" ";
    }cout<<endl;

}
signed main()
{
    solve(); return 0;
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        solve();
    }
    return 0;
}