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
    map<int,int>a;
    set<int>st;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a[x]++;
        st.insert(x);
    }
    map<int,int>b;
    for(int i=0;i<n-1;i++)
    {
        int x;
        cin>>x;
        b[x]++;
    }
    for(int x:st)
    {
        if(a[x]!=b[x])
        {
            cout<<x<<endl;
            a[x]--;
            if(a[x]==0)
            {
                st.erase(x);
            }
            break;
        }
    }
    map<int,int>c;
    for(int i=0;i<n-2;i++)
    {
        int x;
        cin>>x;
        c[x]++;
    }
    for(int x:st)
    {
        if(b[x]!=c[x])
        {
            cout<<x<<endl;
            break;
        }
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