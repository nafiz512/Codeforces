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
    int n;
    cin>>n;
    int t;
    cin>>t;
    if(n==1 && t==10)
    {
        cout<<-1<<endl;
    }
    else{
        if(t<10)
        {
            string ans;
            for(int i=0;i<n;i++)
            {
                char ch='0'+t;
                ans.pb(ch);
            }
            cout<<ans<<endl;
        }
        else{
            string ans;
            ans.pb('1');
            for(int i=0;i<n-1;i++)
            {
                ans.pb('0');
            }
            cout<<ans<<endl;
        }
    }
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