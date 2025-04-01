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
int Calculate(string s,char ch,int a,int b)
{
    int ans=0;
    int cont=0;
    int n=s.size();
    for(int i=0;i<n;i++)
    {
        if(s[i]==ch)
        {
            cont++;
        }
        else{
            if(cont)
                ans+=cont*a+b;
            cont=0;
        }
    }
    if(cont)
        ans+=cont*a+b;
    return  ans; 
}
void solve()
{
    int n,a,b;
    cin>>n>>a>>b;
    string s;
    cin>>s;
    int c0=0;
    int c1=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')c1++;
        else c0++;
    }
    int ans=n*a+b*n;
    int extra1=0;
    if(c0)
        extra1=c0*a+b;
    int extra0=0;
    if(c1)
    {
        extra0=c1*a+b;
    }
    ans=max({ans,Calculate(s,'1',a,b)+extra1,Calculate(s,'0',a,b)+extra0});
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