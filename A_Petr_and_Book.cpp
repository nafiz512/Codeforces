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
void solve()
{
    int n;
    cin>>n;
    vector<int>v(7);
    for(int &i:v)
        cin>>i;
    while(n>0)
    {
        for(int i=0;i<7;i++)
        {
            n-=v[i];
            if(n<=0)
            {
                cout<<i+1<<endl;return;
            }
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