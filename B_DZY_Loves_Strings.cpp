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
    string s;
    cin>>s;
    int k;
    cin>>k;
    vector<int>v(26,0);
    for(int i=0;i<26;i++)
    {
        cin>>v[i];
    }
    vector<int>vi;
    for(int i=0;i<s.size();i++)
    {
        int index=s[i]-'a';
        vi.pb(v[index]);
    }
    int mx=*max_element(all(v));
    for(int i=0;i<k;i++)
    {
        vi.pb(mx);
    }
    int sum=0;
    for(int i=0;i<vi.size();i++)
    {
        sum+=vi[i]*(i+1);
    }
    cout<<sum<<endl;
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