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
bool com(int a)
{
    return a<0;
}
void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(all(v));
    int i=0;
    int ans=0;
    int mn=2*mod;
    while(i<n)
    {
        if(v[i]<=0)
        {
            ans++;
            if(i>0)
            {
                mn=min(mn,abs(v[i]-v[i-1]));
            }
        }
        else 
        {
            break;
        }
        i++;
    }
    if(i<n)
    {
        if(v[i]<=mn)
        ans++;
    }
    cout<<ans<<endl;
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