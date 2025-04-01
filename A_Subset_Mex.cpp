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
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        mp[x]++;
    }
    int ans=0;
    int cont=0;
    int flag1=false;
    int flag2=false;
    for(int i=0;i<=100;i++)
    {
        if(mp[i]<=1)
        {
            if(flag1==false && mp[i]==0)
            {
                ans+=2*i;break;
            }
            else if(flag1==false && mp[i]==1)
            {
                ans+=i;
                flag1=true;
            }
            else if(flag1==true && mp[i]==0)
            {
                ans+=i;flag2=true;
            }
        }
        if(flag1 and flag2)break;
    }
    cout<<ans<<endl;
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