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
#define getbit(n, i) (((n) & (1LL << (i))) != 0) 
#define setbit0(n, i) ((n) & (~(1LL << (i)))) 
#define setbit1(n, i) ((n) | (1LL << (i))) 
#define togglebit(n, i) ((n) ^ (1LL << (i))) 
#define firstone(n) ((n) & (-(n))) 
#define lastone(n) ((64-__builtin_clzll(n)))
#define fo(i,n) for(int i=0;i<n;i++)
const int mod =1e9+7;
const int N=2*1e6+2;
const string yes="YES",no="NO";
//cout << fixed << setprecision(20) << p << endl;

void solve()
{
    int n,q;
    cin>>n>>q;
    vector<int>v(n+1,0);
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    for(int i=1;i<=n;i++)
    {
        v[i]=v[i]+v[i-1];
    }
    
    while(q--)
    {
        int l,r,k;
        cin>>l>>r>>k;
        int tot=v[n];
        tot-=v[r]-v[l-1];
        tot+=k*(r-l+1);
        if(tot&1)
        {
            cout<<yes<<endl;
        }
        else
        {
            cout<<no<<endl;
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