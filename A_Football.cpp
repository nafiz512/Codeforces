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

void solve()
{
    string s;
    cin>>s;
    char prev=s[0];
    int cont=0;
    for(int i=0;i<s.size();i++)
    {
        char cur=s[i];
        if(cur==prev)
        {
            cont++;
        }
        else{
            prev=s[i];
            cont=1;
        }
        if(cont==7)
        {
            cout<<yes<<endl;return;
        }
    }
    cout<<no<<endl;
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