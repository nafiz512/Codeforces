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

void solve()
{
    int k;
    cin>>k;
    string s;
    cin>>s;
    map<char,int>mci;
    for(int i=0;i<s.size();i++)
    {
        mci[s[i]]++;
    }
    for ( auto it:mci)
    {
        int x=it.sc;
        if(x%k!=0)
        {
            cout<<-1<<endl;
            return;
        }
    }
    string p;
    for ( auto it:mci)
    {
        int x=it.sc/k;
        char ch=it.ff;
        while(x--)
        {
            p.pb(ch);
        }
    }
    while(k--)
    {
        cout<<p;
    }
    cout<<endl;
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