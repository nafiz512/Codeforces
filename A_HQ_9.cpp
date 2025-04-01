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
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='H' or s[i]=='Q' or s[i]=='9')
        {
            cout<<yes<<endl;return;
        }
    }
    cout<<no<<endl;
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