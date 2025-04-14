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
    string s;
    cin>>s;
    int upper=0;
    int lower=0;
    int n=s.size();
    for(int i=0;i<n;i++)
    {
        if(s[i]<97)upper++;
        else
            lower++;
    }
    if(upper==n)
    {
        for(int i=0;i<n;i++)
        {
            s[i]+=32;
            cout<<s[i];
        }cout<<endl;
    }
    else if(upper+1==n && s[0]>=97)
    {
        s[0]-=32;
        cout<<s[0];
        for(int i=1;i<n;i++)
        {
            s[i]+=32;
            cout<<s[i];
        }cout<<endl;
    }
    else 
    {
        cout<<s<<endl;
    }
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