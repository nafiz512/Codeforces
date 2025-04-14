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
    if(n==1 || n==2)
    {
        cout<<n<<endl;
    }
    else
    {
        vector<int>mark(n,0);
        for(int i=2;i<n;i++)
        {
            if(v[i]==(v[i-1]+v[i-2]))
            {
                mark[i]=1;
            }
        }
        int mx=0;
        int cont=0;
        for(int i=0;i<n;i++)
        {
            if(mark[i]==1)
            {
                cont++;
            }else
            {
                mx=max(mx,cont);
                cont=0;
            }
        }
        cout<<endl;
        mx=max(mx,cont);
        int ans=mx+2;
        cout<<ans<<endl;
    }
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