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

void printPattern(int n)
{
    int space=n*2;
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<space;j++)
        {
            cout<<' ';
        }
        string s;
        for(int j=0;j<=i;j++)
        {
            char ch=j+'0';
            s.pb(ch);
            s.pb(' ');
            //cout<<j<<' ';
        }
        for(int j=i-1;j>=0;j--)
        {
            char ch=j+'0';
            s.pb(ch);
            s.pb(' ');
            //cout<<j<<' ';
        }
        s.pop_back();
        cout<<s<<endl;
        space-=2;
    }
    
    space=2;
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<space;j++)
        {
            cout<<' ';
        }
        string a;
        for(int j=0;j<=i;j++)
        {
            char ch=j+'0';
            a.pb(ch);
            a.pb(' ');
        }
        for(int j=i-1;j>=0;j--)
        {
            char ch=j+'0';
            a.pb(ch);
            a.pb(' ');
        }
        a.pop_back();
        cout<<a<<endl;
        space+=2;
    }
}
void solve()
{
    int n;
    cin>>n;
    printPattern(n);
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