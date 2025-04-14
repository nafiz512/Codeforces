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
    vector<int>v(3);
    for(int &i:v)
        cin>>i;
    sort(all(v));
    int dif=v[2]-v[1];
    if(v[0]<=dif)
    {
        int ans=v[0];
        v[2]-=v[0];
        ans+=min(v[2],v[1]);
        cout<<ans<<endl;
    }
    else
    {
        int ans=dif;
        v[0]-=dif;
        v[2]-=dif;
        ans+=v[2]+v[0]/2;
        cout<<ans<<endl;
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