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
int powerof2(int n)
{
    int i=0;
    while(n>0)
    {
        n/=2;
        i++;
    }
    return pow(2,i-1);
}

void solve()
{
    int n;
    cin>>n;
    int a=powerof2(n-1);
    vector<int>ans;
    for(int i=a-1;i>=0;i--)
    {
        ans.pb(i);
    }
    for(int i=a;i<n;i++)
    {
        ans.pb(i);
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }cout<<endl;
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