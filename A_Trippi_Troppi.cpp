#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long 
#define ff first
#define sc second
#define endl '\n'
#define pb push_back
#define all(v) (v).begin(),(v).end()
#define Pi 2.0 * acos(0.0)
const int mod =1e9+7;
const int N=2*1e6+2;
const string yes="YES",no="NO";
//cout << fixed << setprecision(20) << p << endl;

// modinverse
void solve()
{
    string ans;
    string s;
    getline(cin,s);
    ans.pb(s[0]);
    for(int i=1;i<s.size();i++)
    {
        if(s[i]==' ')
        {
            ans.pb(s[i+1]);
        }
    }
    cout<<ans<<endl;
}
signed main()
{
    //fast;
    //solve(); return 0;
    int t;
    cin>>t;
    cin.ignore();
    for(int i=1;i<=t;i++)
    {
        solve();
    }
    return 0;
}