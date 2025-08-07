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
const int mod =1e9+7;
const int N=2*1e6+2;
const string yes="YES",no="NO";
//cout << fixed << setprecision(20) << p << endl;
void print(vector<int>&v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<' ';
    }cout<<endl;
}
bool isSorted(vector<int>&v)
{
    for(int i=1;i<v.size();i++)
    {
        if(v[i-1]>v[i])
            return false;
    }
    return true;
}
void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    if(v[n-2]>v[n-1])
    {
        cout<<-1<<endl;
    }
    else
    {
        if(isSorted(v))
        {
            cout<<0<<endl;
            return;
        }
        for(int i=0;i<n-2;i++)
        {
            v[i]=v[n-2]-v[n-1];
        }
        if(isSorted(v))
        {
            cout<<n-2<<endl;
            for(int i=0;i<n-2;i++)
            {
                cout<<i+1<<' '<<n-1<<' '<<n<<endl;
            }
        }
        else
        {
            cout<<-1<<endl;
        }
    }
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