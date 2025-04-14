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
void solve()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    int ans=0;
    if(n==1)
    {
        cout<<ans<<endl;
    }
    else
    {
        n--;
        int cur=1;
        while (n>0)
        {
            if(cur>=k)
            {
                ans+=(n+k-1)/k;
                n=0;
            }
            else
            {
                ans++;
                n-=cur;
                cur*=2;
            }
        }
        cout<<ans<<endl;
    }
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