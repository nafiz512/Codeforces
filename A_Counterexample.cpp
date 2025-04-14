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
int gcd(int a, int b) {
    if(b==0)
        return a;
    else
        return gcd(b, a % b);
}
void solve()
{
    int l,r;
    cin>>l>>r;
    int dif=r-l+1;
    if(dif<3)
    {
        cout<<-1<<endl;
    }
    else 
    {
        int n=1;
        if(dif>3)
        {
            n=2;
        }
        for(int i=0;i<n;i++)
        {
            int a=l+i;
            int b=a+1;
            int c=b+1;
            if(gcd(a,b)==1 && gcd(b,c)==1 &&gcd(a,c)!=1)
            {
                cout<<a<<' '<<b<<' '<<c<<endl;
                return;
            }
        }
        cout<<-1<<endl;
    }
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