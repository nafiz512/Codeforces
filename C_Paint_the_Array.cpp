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
void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int g1=0;
    for(int i=0;i<n;i+=2)
    {
        g1=gcd(g1,v[i]);
    }
    int g2=0;
    for(int i=1;i<n;i+=2)
    {
        g2=gcd(g2,v[i]);
    }
    set<int>st;
    st.insert(g1);
    st.insert(g2);
    for(int d: st)
    {
        bool isPossible=true;
        for(int i=1;i<n;i++)
        {
            if(v[i]%d==0 && v[i-1]%d==0)
            {
                isPossible=false;
                break;
            }
            if(v[i]%d!=0 && v[i-1]%d!=0)
            {
                isPossible=false;
                break;
            }
        }
        if(isPossible)
        {
            cout<<d<<endl;
            return;
        }
    }
    cout<<0<<endl;
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