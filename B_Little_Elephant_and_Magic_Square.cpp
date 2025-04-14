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
const int N=1e5;
const string yes="YES",no="NO";
//cout << fixed << setprecision(20) << p << endl;

// modinverse
void solve()
{
    int n=3;
    vector<vector<int>>v(n,vector<int>(n));
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>v[i][j];
        }
    }
    int a=0,b=0,c=0;
    for(c=1;c<=N;c++)
    {
        b=v[2][0]+v[2][1]+c-v[1][0]-v[1][2];
        a=v[1][0]+v[1][2]+b-v[0][1]-v[0][2];
        int e3=v[2][0]+v[2][1]+c;
        if(a>0 && b>0 && c>0 && a+b+c==e3)
        {
            break;
        }
    }
    v[0][0]=a;  v[1][1]=b;  v[2][2]=c;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<v[i][j]<<' ';
        }cout<<endl;
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