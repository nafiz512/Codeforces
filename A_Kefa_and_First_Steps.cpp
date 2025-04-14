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
    int n;
    cin>>n;
    vector<int>a(n);
    for(int &i:a){
        cin>>i;
    }
    int ans=1;
    for(int i=0;i<n;i++)
    {
        int cont=1;
        int j=i+1;
        for(j=i+1;j<n;j++)
        {
            if(a[j-1]>a[j])
            {
                break;
            }
            cont++;
        }
        i=j-1;
        ans=max(ans,cont);
    }
    cout<<ans<<endl;
}
signed main()
{
    fast;
    solve(); return 0;
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        solve();
    }
    return 0;
}


