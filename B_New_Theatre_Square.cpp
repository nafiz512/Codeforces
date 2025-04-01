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
    int n,m,x,y;
    cin>>n>>m>>x>>y;
    vector<string>s(n);
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    int cont=0;
    int cost=0;
    for(int i=0;i<n;i++)
    {
        cont+=count(all(s[i]),'.');
        int c=0;
        for(int j=0;j<m;j++)
        {
            if(s[i][j]=='.')
            {
                c++;
            }
            else{
                if(c){
                    c=0;
                cost+=x;
                }
                
            }
            if(c==2)
            {
                cost+=y;
                c=0;
            }
        }
        if(c)
        {
            cost+=x;
        }
    }
    int cost1=cont*x;
    int ans=min(cost,cost1);
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