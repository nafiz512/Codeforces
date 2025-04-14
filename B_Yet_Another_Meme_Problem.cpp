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

// modinverse
bool isNine(string s)
{
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!='9')
        {
            return false;
        }
    }
    return true;
}
void solve()
{
    int a,b;
    cin>>a;
    string s;
    cin>>s;
    b=s.size()-1+isNine(s);
    cout<<a*b<<endl;
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