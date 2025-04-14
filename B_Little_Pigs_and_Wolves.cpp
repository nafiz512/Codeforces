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
    int m;
    cin>>m;
    vector<string>s(n);
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    int cont=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(s[i][j]!='W')
                continue;
            int x[4]={0,0,-1,1};
            int y[4]={1,-1,0,0};
            for(int k=0;k<4;k++)
            {
                int ni=i+x[k];
                int nj=j+y[k];
                if(ni<0 || ni>=n || nj<0 || nj>=m)
                    continue;
                if(s[ni][nj]=='P')
                {
                    cont++;
                    s[ni][nj]='.';
                    break;
                }
            }
            //ans=max(ans,cont);
        }
    }
    cout<<cont<<endl;
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