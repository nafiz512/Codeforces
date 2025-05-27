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
#define getbit(n, i) (((n) & (1LL << (i))) != 0) 
#define setbit0(n, i) ((n) & (~(1LL << (i)))) 
#define setbit1(n, i) ((n) | (1LL << (i))) 
#define togglebit(n, i) ((n) ^ (1LL << (i))) 
#define firstone(n) ((n) & (-(n))) 
#define lastone(n) ((64-__builtin_clzll(n)))
#define fo(i,n) for(int i=0;i<n;i++)
const int mod =1e9+7;
const int N=2*1e6+2;
const string yes="YES",no="NO";
//cout << fixed << setprecision(20) << p << endl;

void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(all(v),greater<int>());
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(sum==v[i])
        {
            for(int j=i+1;j<n;j++)
            {
                if(v[j]!=v[i])
                {
                    swap(v[i],v[j]);
                    break;
                }
            }
            if(sum==v[i])
            {
                cout<<no<<endl;
                return;
            }
            else
            {
                sum+=v[i];
            }
        }
        else
        {
            sum+=v[i];
        }
    }
    cout<<yes<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<' ';
    }
    cout<<endl;
}
signed main()
{
    fast;
    //solve(); return 0;
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        solve();
    }
    return 0;
}