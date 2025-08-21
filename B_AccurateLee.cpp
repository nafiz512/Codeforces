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
string findS(string s)
{
    
    int n=s.size();
    string ans="",s1;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            if(s1.size())
            {
                while(i<n)
                {
                    if(s[i]=='1')
                    {
                        i--;
                        break;
                    }
                    i++;
                }
                s1="";
                ans.pb('0');
            }
            else
            {
                ans.pb('0');
            }
        }
        else{
            s1.pb('1');
        }
    }
    ans+=s1;
    //cout<<"ans:" <<ans<<endl;
    return ans;
}
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    string p1,p2;
    for(int i=0;i<n;i++)
    {
        p1.pb(s[i]);
        if(s[i]=='1')
        {
            for(int j=i+1;j<n;j++)
            {
                p2.pb(s[j]);
            }
            break;
        }
    }
   //cout<<p1<<"p2:"<<p2<<endl;
    string ans=findS(p2);
    ans=findS(p1+ans);
    cout<<ans<<endl;
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