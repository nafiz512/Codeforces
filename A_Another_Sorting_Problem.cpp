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

bool comp(string a,string b)
{
    for(int i=0;i<a.size();i++)
    {
        if(a[i]!=b[i])
        {
            if(i&1)
            {
                return a[i]>b[i];
            }
            else
            {
                return a[i]<b[i];
            }
        }
    }
    return a==b;
}
void solve()
{
    int n,m;
    cin>>n>>m;
    vector<string>s(n);
    map<string,int>mp;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        mp[s[i]]=i+1;
    }
    sort(all(s),comp);
    for(auto &it:s)
    {
        cout<<mp[it]<<' ';
    }cout<<endl;
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