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
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    string s;
    cin>>s;
    map<int,int>mp0;
    map<int,int>mp1;
    for( int i=0;i<n;i++)
    {
        if(s[i]=='0')mp0[v[i]]=i;
        else mp1[v[i]]=i;
    }
    int x=1;
    for (auto key : mp0)
    {
        v[key.sc]=x;
        x++;
    }
    for (auto key : mp1)
    {
        v[key.sc]=x;
        x++;
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }cout<<endl;
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