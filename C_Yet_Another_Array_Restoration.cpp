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
auto findDivisor(int n)
{
    vector<int>v;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            if(i*i==n)
            {
                v.pb(i);
            }
            else
            {
                v.pb(i);
                v.pb(n/i);
            }
        }
    }
    sort(all(v));
    return v;
}
void print(vector<int>&v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<' ';
    }cout<<endl;
}
void solve()
{
    int n;
    cin>>n;
    int x,y;
    cin>>x>>y;

    int dif=1e6;
    for(int i=1;i<=y;i++)
    {
        int val=y-x;
        if(val%i==0)
        {
            if((1+val/i)<=n)
            {
                dif=i;
                break;
            }
        }
    }
    vector<int>ans;
    for(int i=x;i<=y;i+=dif)
    {
        ans.pb(i);
        n--;
    }
    int val=x;
    while(n>0)
    {
        if(val-dif>0)
        {
            ans.pb(val-dif);
        }
        else{
            break;
        }
        val-=dif;
        n--;
    }
    val=y;
    while(n>0)
    {
        ans.pb(val+dif);
        val+=dif;
        n--;
    }
    sort(all(ans));
    print(ans);
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