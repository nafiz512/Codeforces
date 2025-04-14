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
int gcd(int a, int b) {
    if(b==0)
        return a;
    else
        return gcd(b, a % b);
}
int modExp(int x,int n)
{
    if(x==1)
        return 1;
    if(n==0)
        return 1;
    if(n%2 == 0)
        return modExp((x*x)%mod,n/2);
    else
        return (x*modExp((x*x)%mod,(n-1)/2))%mod;
}
int BinMatch(int x,int y)
{
    int cont=0;
    for(int i=1;i<=30;i++)
    {
        int a=x%2;
        int b=y%2;
        x/=2;
        y/=2;
        if(a!=b)
            cont++;
    }
    return cont;
}
void solve()
{
    int n;
    cin>>n;
    int m,k;
    cin>>m>>k;
    vector<int>v(m);
    for(int i=0;i<m;i++)
    {
        cin>>v[i];
    }
    int x;
    cin>>x;
    int ans=0;
    for(int i=0;i<m;i++)
    {
        int cont=BinMatch(x,v[i]);
        if(cont<=k)
        {
            ans++;
        }
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