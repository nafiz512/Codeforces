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
int digitCount(int n)
{
    int cont=0;
    while(n>0)
    {
        cont++;
        n/=10;
    }
    return cont;
}
void solve()
{
    int n;
    cin>>n;
    if(n>9)
    {
        int ans=9;
        while (n>9)
        {
            int d=digitCount(n);
            int x=pow(10,d-1);
            ans+=n/x;
            n=x-1;
        }
        cout<<ans<<endl;
    }
    else
        cout<<n<<endl;
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