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
bool isPrime(int n){
    if(n==1)return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)return false;
    }
    return true;
}
void solve()
{
    int n;
    cin>>n;
    int a=-1;
    int i=1+n;
    while(a==-1)
    {
        if(isPrime(i))
        {
            a=i;break;
        }
        i++;
    }
    int b=-1;
    i+=n;
    while(b==-1)
    {
        if(isPrime(i))
        {
            b=i;break;
        }
        i++;
    }
    cout<<a*b<<endl;
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


