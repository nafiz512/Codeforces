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
    string s,p;
    cin>>s>>p;
    map<char,int>mp;
    for(int i=0;i<p.size();i++)
    {
        mp[p[i]]++;
    }
    int k=0;
    for(int i=0;i<p.size();i++)
    {
        int fq=mp[p[i]];
        for(int j=s.size()-1;j>=k && fq>0;j--)
        {
            if(s[j]==p[i])
            {
                fq--;
                if(fq==0)
                {
                    k=j+1;
                }
                //cout<<fq<<'-'<<p[i]<<k<<endl;
            }
        }
        if(fq)
        {
            //cout<<fq<<' '<<p[i]<<k<<endl;
            cout<<no<<endl;
            return;
        }
        mp[p[i]]--;
    }
    cout<<yes<<endl;
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