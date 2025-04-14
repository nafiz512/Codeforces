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
    int s;
    cin>>s;
    int n;
    cin>>n;
    bool isPossible=true;
    vector<pair<int,int>>vpii;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        vpii.pb({x,y});
    }
    sort(all(vpii));
    for(int i=0;i<n;i++)
    {
        int x=vpii[i].f,y=vpii[i].s;
        if(s<=x)
        {
            isPossible=false;
        }
        else{
            s+=y;
        }
    }
    if(isPossible)
    {
        cout<<yes<<endl;
    }
    else
    {
        cout<<no<<endl;
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