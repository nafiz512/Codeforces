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
int modExp(int x,int n)
{
    if(x==1)
        return 1;
    if(n==0)
        return 1;
    if(n%2 == 0)
        return modExp((x*x),n/2);
    else
        return (x*modExp((x*x),(n-1)/2));
}
bool isCube(int n) {
    int x = round(pow(n,1.0/3));
    return x * x * x == n;
}

void solve()
{
    int n;
    cin>>n;
    
    for(int i=1;i*i*i<=n;i++)
    {
        int a,b;
        a=i*i*i;
        b=n-a;
        if(b > 0 && isCube(b))
        {
            cout<<yes<<endl;
            return;
        }
    }
    cout<<no<<endl;
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