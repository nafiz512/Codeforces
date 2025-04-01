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


void solve()
{
    int n;
    cin>>n;
    if(n==2)
    {
        cout<<2<<endl<<2<<' '<<1<<endl;
    }
    else{
        cout<<2<<endl;
        vector<int>v(n);
        for(int i=1;i<=n;i++)
        {
            v[i-1]=i;
        }
        int c=v.back(); v.pop_back();
        int b=v.back(); v.pop_back();
        int a=v.back(); v.pop_back();
        v.push_back(b);
        v.pb((a+c)/2);
        vector<pair<int,int>>vpii;
        //vpii.pb({a,c});
        cout<<a<<' '<<c<<endl;
        while(v.size()>=2)
        {
            a=v.back(); v.pop_back();
            c=v.back(); v.pop_back();
            v.pb((a+c)/2);
            //vpii.pb({a,c});
            cout<<a<<' '<<c<<endl;
        }
        // cout<<v[0]<<endl;
        // for( auto it:vpii)
        // {
        //     cout<<it.f<<" "<<it.s<<endl;
        // }
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