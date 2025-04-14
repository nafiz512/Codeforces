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

    vector<vector<int>>v(n,vector<int>(m,0));

    int sx,sy;
    cin>>sx>>sy;

    v[sx-1][sy-1]=1;
    cout<<sx<<' '<<sy<<endl;
    int cont=1;
    int r=sx-1,c=sy-1;
    for(int i=0;i>=0;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<m;j++)
            {
                if(v[r][j]==0)
                {
                    v[r][j]=1;
                    c=j;
                    cout<<r+1<<' '<<j+1<<endl;
                    cont++;
                }
            }
        }
        else
        {
            for(int j=0;j<n;j++)
            {
                if(v[j][c]==0)
                {
                    v[j][c]=1;
                    r=j;
                    cout<<j+1<<' '<<c+1<<endl;
                    cont++;
                }
            }
        }
        if(cont==n*m)
        {
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