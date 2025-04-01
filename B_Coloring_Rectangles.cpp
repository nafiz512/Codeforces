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
    int n,m;
    cin>>n>>m;
    vector<string>s(n,string (m,'R'));
    vector<pair<int,int>>dc={{0,1},{0,-1},{1,0},{-1,0}};
    int ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(s[i][j]=='B')
                continue;
            for(auto it:dc)
            {
                int nr=i+it.f;
                int nc=j+it.s;
                if(nr>=n || nr<0 || nc>=m || nc<0)
                    continue;
                if(s[i][j]==s[nr][nc])
                {
                    s[nr][nc]='B';
                }
            }
            //cout<<s[i][j]<<' ';
        }//cout<<endl;
        ans+=count(all(s[i]),'B');
    }   
    for(auto it:s)
    {
        for(auto ch:it)
        {
            cout<<ch<<' ';
        }cout<<endl;
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