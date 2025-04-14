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
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cm=count(all(s),'M');
    int ct=count(all(s),'T');
    if(cm*2==ct)
    {
        int m=0;
        int t=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='M')
            {
                m++;
                if(t<m)
                {
                    cout<<no<<endl;
                    return;
                }
            }
            else{
                t++;
            }
        }
        m=0;
        t=0;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='M')
            {
                m++;
                if(t<m)
                {
                    cout<<no<<endl;
                    return;
                }
            }
            else{
                t++;
            }
        }
        cout<<yes<<endl;
    }
    else
    {
        cout<<no<<endl;
    }
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