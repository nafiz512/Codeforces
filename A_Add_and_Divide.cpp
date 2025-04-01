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
int steps(int n,int a)
{
    int cont=0;
    while(n>0)
    {
        n/=a;
        cont++;
    }
    return cont;
}

void solve()
{
    int n;
    cin>>n;
    int a;
    cin>>a;
    if(n<a)
    {
        cout<<1<<endl;
    }
    else if(n==a)
    {
        cout<<2<<endl;
    }
    else
    {
        vector<int>v;
        int st=0;
        if(a==1)
        {
            st++;
        }
        while(st<=20)
        {
            int x=steps(n,a+st);
            v.pb(x+st);
            st++;
        }
        int ans=*min_element(all(v));
        cout<<ans<<endl;
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