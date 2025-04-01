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
string  isEqual(string s1,int n)
{
    string s;
    while(n--)
    {
        s+=s1;
    }
    return s;
}
void solve()
{
    string s1,s2;
    cin>>s1>>s2;
    int n=s1.size();
    int m=s2.size();
    int gcd=__gcd(n,m);
    if(isEqual(s2,n/gcd)==isEqual(s1,m/gcd))
    {
        cout<<isEqual(s2,n/gcd)<<endl;
    }
    else{
        cout<<-1<<endl;
    }
    
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