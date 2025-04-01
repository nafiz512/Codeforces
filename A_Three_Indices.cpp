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
    vector<int>v(n);
    for(int &i:v)
    cin>>i;
    
    for(int j=1;j<n-1;j++)
    {
        bool less=false;
        int i=-2,k=-2;
        for(i=j-1;i>=0;i--)
        {
            if(v[i]<v[j])
            {
                less =true;
                break;
            }
        }
        bool less2=false;
        for(k=j+1;k<n;k++)
        {
            if(v[k]<v[j])
            {
                less2 =true;
                break;
            }
        }
        if(less and less2)
        {
            cout<<yes<<endl;
            cout<<i+1<<" "<<j+1<<" "<<k+1<<endl;return;
        }
    }
    cout<<no<<endl;
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