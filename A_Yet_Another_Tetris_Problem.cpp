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
    int n;cin>>n;
    set<int>st;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st.insert(x&1);
    }
    if(st.size()==1)
    {
        cout<<yes<<endl;
    }
    else{
        cout<<no<<endl;
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