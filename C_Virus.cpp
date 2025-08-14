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
const int mod =1e9+7;
const int N=2*1e6+2;
const string yes="YES",no="NO";
//cout << fixed << setprecision(20) << p << endl;

void solve()
{
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<int>v(m);
    for(int i=0;i<m;i++)
    {
        cin>>v[i];
    }
    sort(all(v));
    vector<int>gap;
    gap.pb(abs(1-v[0])+abs(n-v[m-1]));
    for(int i=1;i<m;i++)
    {
        gap.pb(v[i]-v[i-1]-1);
    }
    sort(all(gap),greater<int>());
    int save=0;
    int dayCont=0;
    for(int i=0;i<gap.size();i++)
    {
        int x=gap[i]-dayCont;
        if(x==1)
        {
            save+=x;
        }
        else if(x>1)
        {
            save+=x-1;
        }
        dayCont+=4;
    }
    cout<<n-save<<endl;
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