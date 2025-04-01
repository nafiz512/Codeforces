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
    string a,b;
    cin>>a>>b;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        int x=a[i]-'0'+b[i]-'0';
        if(x==1)
        {
            ans+=2;
        }
        else if(x==0 && i+1<n)
        {
            if(a[i+1]=='1' && b[i+1]=='1')
            {
                ans+=2;
                i++;
            }
            else{
                ans+=1;
            }
        }
        else if(x==0)
        {
            ans++;
        }
        else {
            while(i<n)
            {
                if(a[i]=='0' || b[i]=='0')
                {
                    ans+=2;
                    break;
                }
                i++;
            }
        }
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