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
bool isSorted(string s)
{
    for(int i=1;i<s.size();i++)
    {
        if(s[i]<s[i-1])return false;
    }
    return true;
}

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(isSorted(s))
    {
        cout<<0<<endl;return;
    }
    string s1=s;
    sort(all(s1));
    cout<<1<<endl;
    int k=0;
    vector<int>indx;
    for(int i=0;i<n;i++)
    {
        if(s[i]!=s1[i])
        {
            indx.pb(i+1);
        }
    }
    cout<<indx.size()<<' ';
    for(int i=0;i<indx.size();i++)
    {
        cout<<indx[i]<<' ';
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