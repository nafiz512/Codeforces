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
bool compOddfirst(int a,int b){
    if(a%2 != b%2)
        return a%2<b%2;
    return a<b;
}
bool compEvenfirst(int a,int b)
{
    if(a%2!=b%2)return a%2>b%2;
    return a<b;
}
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int>r,b;
    for(int i=0;i<n;i++)
    {
        int x=s[i]-'0';
        if(i&1)
        {
            b.pb(x);
        }
        else{
            r.pb(x);
        }
    }
    sort(all(r),compOddfirst);
    sort(all(b),compEvenfirst);
    int val;
    if(n%2==0)
    {
        val=b.back();
    }
    else{
        val=r.back();
    }
    if(val&1)
    {
        cout<<1<<endl;
    }
    else{
        cout<<2<<endl;
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