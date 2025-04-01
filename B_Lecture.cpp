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
    int n,m;
    cin>>n>>m;
    map<string,string>mp;
    for(int i=0;i<m;i++)
    {
        string s1,s2;
        cin>> s1>>s2;
        mp[s1]=((s1.size()<=s2.size())?s1:s2);
    }
    for(int i=0;i<n;i++)
    {
        string x;
        cin>>x;
        cout<<mp[x]<<' ';
    }cout<<endl;
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