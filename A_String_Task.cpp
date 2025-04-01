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
    string ans;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='A'||s[i]=='E'||s[i]=='Y'||s[i]=='O'||s[i]=='I'||s[i]=='U')continue;
        if(s[i]=='a'||s[i]=='e'||s[i]=='y'||s[i]=='o'||s[i]=='i'||s[i]=='u')continue;
        ans.pb('.');
        char ch=((s[i]<97)?s[i]+32:s[i]);
        ans.pb(ch);
    }
    cout<<ans<<endl;
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