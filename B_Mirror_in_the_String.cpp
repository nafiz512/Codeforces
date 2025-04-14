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
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(s.size()==1)
    {
        cout<<s<<s<<endl;
    }
    else 
    {
        
        if(s[0]==s[1])
        {
            cout<<s[0]<<s[0]<<endl;
        }
        else 
        {
            string ans;
            ans.pb(s[0]);
            for(int i=1;i<n;i++)
            {
                if(s[i]<=ans.back())
                {
                    ans.pb(s[i]);
                }
                else
                {
                    break;
                }
            }
            cout<<ans;
            reverse(all(ans));
            cout<<ans<<endl;
        }
    }
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