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

void solve()
{
    int n;
    cin>>n;
    int q;
    cin>>q;
    string s;
    cin>>s;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        l--;r--;
        bool flag=false;
        for(int j=l-1;j>=0;j--)
        {
            if(s[l]==s[j])
            {
                flag=true;break;
            }
        }
        for(int j=r+1;j<n;j++)
        {
            if(s[r]==s[j])
            {
                flag=true;break;
            }
        }
        if(flag)
        {
            cout<<yes<<endl;
        }
        else {
            cout<<no<<endl;
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