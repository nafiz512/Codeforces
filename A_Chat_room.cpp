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
    string s;
    cin>>s;
    string p="hello";
    string ans;
    int i=0;
    for(int j=0;j<s.size();j++)
    {
        if(s[j]==p[i])
        {
            ans.pb(s[j]);i++;
        }
        if(ans==p)
        {
            cout<<yes<<endl;
            return ;
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