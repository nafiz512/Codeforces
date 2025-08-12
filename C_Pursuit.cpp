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
bool isPossible(vector<int>a,vector<int>b,int k)
{
    //cout<<"k:" <<k<<endl;
    for(int i=0;i<k;i++)
    {
        a.pb(100);
        b.pb(0);
    }
    sort(all(a));
    sort(all(b));
    int n=a.size();
    int d=(n)/4;
    int suma=accumulate(all(a),0ll);
    int sumb=accumulate(all(b),0ll);
    for(int i=0;i<d;i++)
    {
        suma-=a[i];
        sumb-=b[i];
    }
    return suma>=sumb;
}
void solve()
{
    int n;
    cin>>n;
    vector<int>a(n),b(n);
    for(int &i:a)
    {
        cin>>i;
    }
    for(int &i:b)
        cin>>i;
    int l=-1,r=n*2;
    int ans=-1;
    while(r-l>1)
    {
        int mid=(l+r+1)/2;
        if(isPossible(a,b,mid))
        {
            ans=mid;
            r=mid;
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