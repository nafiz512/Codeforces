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
#define Pi 2.0 * acos(0.0);
const string yes="YES",no="NO";

//cout << fixed << setprecision(20) << p << endl;
//bigmod //gcd // modinverse
string Bin(int n)
{
    string s;
    while(n>0)
    {
        int x=n%2;
        char ch='0'+x;
        s.pb(ch);
        n/=2;
    }
    reverse(all(s));
    return s;
}
void solve()
{
    int a,b;
    cin>>a>>b;
    string sa=Bin(a);
    string sb=Bin(b);
    for(int i=0;i<min(sa.size(),sb.size());i++)
    {
        if(sa[i]!=sb[i])
        {
            cout<<-1<<endl;return;
        }
    }
    int cont=0;
    string s=((sa.size()>sb.size())?sa:sb);
    s=s.substr(min(sa.size(),sb.size()),s.size());
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!='0')
        {
            cout<<-1<<endl;return;
        }
    }
    int p2=0,p4=0,p8=0;
    int x=s.size();
    p8=x/3;
    x%=3;
    p4=x/2;
    x%=2;
    p2=x;
    cout<<p2+p4+p8<<endl;
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