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
    vector<int>ans(n,1);//,v(n);
    map<int,vector<int>>miv;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        miv[x].pb(i);
        //v[i]=x;
    }
    set<int>st;
    for(auto &it:miv)
    {
        int x=it.ff;
        if(st.find(k-x)!=st.end())
        {
            for(int &i:it.sc)
            {
                ans[i]=0;
            }
        }
        else{
            st.insert(x);
        }
        if(x+x==k && it.sc.size()>1)
        {
            vector<int>v=it.sc;
            for(int i=0;i<v.size()/2;i++)
            {
                ans[v[i]]=ans[v[i]]^1^0;
            }
        }
    }
    for(int &i:ans)
    {
        cout<<i<<' ';
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