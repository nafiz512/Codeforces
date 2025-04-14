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
    vector<int>v(n);
    for(int &i:v)
        cin>>i;
    int c0=count(all(v),0ll);
    int c1=count(all(v),1ll);
    if(c1 <=n/2)
    {
        cout<<n/2<<endl;
        for(int i=0;i<n/2;i++)
        {
            cout<<0<<' ';
        }cout<<endl;
    }
    else 
    {
        if(c1&1)
        {
            cout<<c1-1<<endl;
            for(int i=0;i<c1-1;i++)
            {
                cout<<1<<' ';
            }cout<<endl;
        }
        else
        {
            cout<<c1<<endl;
            for(int i=0;i<c1;i++)
            {
                cout<<1<<' ';
            }cout<<endl;
        }
    }
}
signed main()
{
    //fast;
    //solve(); return 0;
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        solve();
    }
    return 0;
}