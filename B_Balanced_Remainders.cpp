#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long 
#define ff first
#define sc second
#define endl '\n'
#define pb push_back
#define all(v) (v).begin(),(v).end()
const int mod =1e9+7;
const int N=1e6+2;
#define Pi 2 * acos(0.0);
const string yes="YES",no="NO";

void solve()
{
    int n;
    cin>>n;
    vector<int>cont(3,0);
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        cont[x%3]++;
    }
    int ned=n/3;
    int ans=0;
    vector<vector<int>>cost(3,vector<int>(3,0));
    cost[0][0]=0;cost[0][1]=2;cost[0][2]=1;
    cost[1][0]=1;cost[1][1]=0;cost[1][2]=2;
    cost[2][0]=2;cost[2][1]=1;cost[2][2]=0;
    for(int i=0;i<3;i++)
    {
        if(cont[i]<ned)
        {
            for(int j=0;j<3;j++)
            {
                if(j==i || cont[j]<=ned)continue;
                int dif=min(ned-cont[i],cont[j]-ned);
                ans+=cost[i][j]*dif;
                cont[j]-=dif;
                cont[i]+=dif;
            }
        }
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