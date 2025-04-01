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

void solve()
{
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<int>v(m);
    for(int &i:v)
    {
        cin>>i;
    }
    sort(all(v));
    int mn=v[m-1]-v[0];
    for(int i=0;i<=m-n;i++)
    {
        int dif=v[n+i-1]-v[i];
        mn=min(mn,dif);
    }
    cout<<mn<<endl;
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