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
void print(vector<int>&v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<' ';
    }cout<<endl;
}
void solve()
{
    int n;
    cin>>n;
    int q;
    cin>>q;

    vector<int>v(n),a(q);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<q;i++)
    {
        cin>>a[i];
    }
    int cur=31;
    for(int i=0;i<q;i++)
    {
        if(a[i]>=cur)
            continue;
        int val=pow(2,a[i]);
        for(int j=0;j<n;j++)
        {
            if(v[j]%val==0)
            {
                v[j]+=val/2;
            }
        }
        cur=a[i];
    }
    print(v);
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