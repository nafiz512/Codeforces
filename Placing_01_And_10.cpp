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
const int N=1e8+2;
#define Pi 2 * acos(0.0);
const string yes="YES",no="NO";

void solve()
{   
    int a;
    cin>>a;
    int b;
    cin>>b;
    int n=min(a,b);
    string s;
    string c,c2;
    if(a>b)
    {
        c="01";
        c2="10";
    }
    else{
        c="10";
        c2="01";
    }
    
    for(int i=0;i<n*2;i++)
    {
        if(i%2==0)
        {
            s+=c;
        }
        else{
            s+=c2;
        }
    }
    a-=n;
    b-=n;
    while(a>0 && a>b)
    {
        s+="01";a--;
    }
    while(b>0 && b>a)
    {
        s+="10";b--;
    }
    int ans=0;
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]!=s[i+1])ans++;
    }
    cout<<ans<<endl;
}
signed main()
{
    fast;
    // solve(); return 0;
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        solve();
    }
    return 0;
}


