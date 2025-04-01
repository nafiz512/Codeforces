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

int findPattern(string s,string p,int j)
{
    for(int i=j;i<s.size()-1;i++)
    {
        if(s[i]==p[0] && s[i+1]==p[1])
        return i;
    }
    return -1;
}

void solve()
{
    string s;
    cin>>s;
    int l=findPattern(s,"11",0);
    int r=findPattern(s,"00",l+1);
    //cout<<l<<" "<<r<<endl;
    if(l!=-1 && r!=-1 && l<r)
    {
        cout<<no<<endl;
    }
    else{
        cout<<yes<<endl;
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