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
    int a,b;
    cin>>a>>b;
    int xor1=0;
    int n=a-1;
    if(n%4==0)xor1=n;
    else if(n%4==1)xor1=1;
    else if(n%4==2)xor1=n+1;
    else if(n%4==3)xor1=0;
    if(xor1==b)
    {
        cout<<a<<endl;
    }
    else 
    {
        int x=(xor1^b);
        if(x==a)
        {
            cout<<a+2<<endl;
        }
        else 
        {
            cout<<a+1<<endl;
        }
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