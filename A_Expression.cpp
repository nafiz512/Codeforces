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
    int a,b,c;
    cin>>a>>b>>c;
    int ans1=(a+b)*c;
    int ans2=a*(b+c);
    int ans3=a+b*c;
    int ans4=a*b+c;
    int ans5=a+b+c;
    int ans6=a*b*c;
    int ans=max({ans1,ans2,ans3,ans4,ans5,ans6});
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