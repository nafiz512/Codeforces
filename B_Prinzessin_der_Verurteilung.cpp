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
string ss="";
void num_str(int num)
{
    if(num)
    {
        num_str((num-1)/26);
        ss+=('a'+(num-1)%26);
    }
}
void solve()
{
    
    int n;
    cin>>n;
    string s;
    cin>>s;
    int i=1;
    while(true)
    {
        ss="";
        num_str(i);
        if(s.find(ss)==string::npos)
        {
            // cout<<s<<endl;
            cout<<ss<<endl;
            return;
        }
        i++;
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
