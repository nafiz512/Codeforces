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
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        int cont=1;
        for(int j=i-1;j>=0;j--)
        {
            if(v[j]<=v[j+1])
            {
                cont++;
            }
            else{
                break;
            }
        }
        for(int j=i+1;j<n;j++)
        {
            if(v[j]<=v[j-1])
            {
                cont++;
            }
            else break;
        }
        ans=max(ans,cont);
    }
    cout<<ans<<endl;
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