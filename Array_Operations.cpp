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
    for(int &i:v)
    {
        cin>>i;
    }
    if(n==1 )
    {
        cout<<v[0]<<endl;
        return;
    }
    if(n==3)
    {
        int ans=max(v[0],v[n-1])+1;
        ans=max(ans,v[1]);
        cout<<ans<<endl;
        return;
    }
    
    int mx=0;
    vector<int>indx;
    for(int i=0;i<n;i+=1)
    {
        mx=max(mx,v[i]);
    }
    for(int i=0;i<n;i+=1)
    {
        if(v[i]==mx)
        {
            indx.pb(i+1);
        }
    }
    int k=-1;
    for(int i=0;i<indx.size();i++)
    {
        if(k==-1 ||indx[i]%2==1)
        {
            k=indx[i];
        }
    }
    int ans=0;
    if(k%2==1)
    {
        ans=mx+(n/2);
    }
    else
    {
        ans=mx+(n/2)-1;
    }
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