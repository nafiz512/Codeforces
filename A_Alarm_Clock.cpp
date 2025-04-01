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
#define Pi 2 * acos(0.0);
const string yes="YES",no="NO";

void solve()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(b>=a){
        cout<<b<<endl;
        return;
    }
    if(d>=c)
    {
        cout<<-1<<endl;return;
    }
    int x=a-b;
    int y=c-d;
    int times=(x+y-1)/y;
    int ans=b+c*times;
    cout<<ans<<endl;
}
signed main()
{
    //fast;
    //solve(); return 0;
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        solve();
    }
    return 0;
}