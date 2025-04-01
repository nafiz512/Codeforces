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
bool isFair(int n)
{
    int x=n;
    while(n>0)
    {
        int m=n%10;
        n/=10;
        if(m==0)continue;
        if(x%m!=0)return false;
    }
    return true;
}
void solve()
{
    int n;
    cin>>n;
    while(n){
        if(isFair(n))
        {
            break;
        }
        n++;
    }
    cout<<n<<endl;
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