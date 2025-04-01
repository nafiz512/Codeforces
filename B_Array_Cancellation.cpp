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
    int n;
    cin>>n;
    vector<int>v(n);
    int sp=0;
    int sn=0;
    for(int &i:v)
    {
        cin>>i;
        if(i<0)sn+=i;
        else sp+=i;
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]>0)sum+=v[i];
        if(v[i]<0 and sum>0)
        {
            int x=min(sum,abs(v[i]));
            sum-=x;
            sn+=x;
            sp-=x;
        }
    }
    int ans=min(abs(sn),sp)+abs(sn+sp);
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