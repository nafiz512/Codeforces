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
int calc(vector<int>&v,int k,int h)
{
    int sum=0;
    for(int i=1;i<v.size();i++)
    {
        int dif=v[i]-v[i-1];
        sum+=min(dif,k);
        if(sum>=h)
            return true;
    }
    sum+=k;
    if(sum>=h)return true;
    return false;
}
void solve()
{
    int n,h;
    cin>>n>>h;
    vector<int>v(n);
    for(int &x:v)
        cin>>x;
    int l=0,r=1e18+2;
    int ans=h;
    while(r-l>1)
    {
        int mid=(l+r)/2;
        if(calc(v,mid,h))
        {
            r=mid;
            ans=mid;
        }
        else
        {
            l=mid;
        }
    }
    cout<<ans<<endl;
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