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
        return modExp((x*x)%mod,n/2);
    else
        return (x*modExp((x*x)%mod,(n-1)/2))%mod;
}
int removeZeros(int n)
{
    string s;
    while(n>0)
    {
        int temp=n%10;
        n/=10;
        if(temp==0)continue;
        char ch=temp+'0';
        s.pb(ch);
    }
    reverse(all(s));
    int r=0;
    int ans=0;
    for(int i=s.size()-1;i>=0;i--)
    {
        int x=s[i]-'0';
        ans+=x*pow(10,r);
        r++;
    }
    return ans;
}
void solve()
{
    int  a,b;
    cin>>a>>b;
    int c=removeZeros(a+b);
    int a1=removeZeros(a);
    int b1=removeZeros(b);
    //cout<<c<<endl;
    //cout<<c1<<endl;
    if(a1+b1==c)
    {
        cout<<yes<<endl;
    }
    else
    {
        cout<<no<<endl;
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