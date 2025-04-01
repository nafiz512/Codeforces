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
    string a;
    string b;
    cin>>a>>b;
    if(a.size()<b.size())
    {
        swap(a,b);
    }
    int mx=0;
    for(int i=0;i<b.size();i++)
    {
        for(int j=0;j<a.size();j++)
        {
            
            if(b[i]==a[j])
            {
                int l=i;
                int r=j;
                int cont=0;
                while(r<a.size() && l<b.size())
                {
                    if(b[l]==a[r])
                    {
                        cont++;
                    }
                    else
                    {
                        break;
                    }
                    l++;
                    r++;
                }
                mx=max(mx,cont);
            }
            
        }
    }
    int ans=a.size()-mx+b.size()-mx;
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