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
    int n=4;
    vector<string>s(n);
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    int isPossible=false;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            int ch=0;
            int cd=0;
            for(int r=i;r<i+2;r++)
            {
                for(int c=j;c<j+2;c++)
                {
                    if(s[r][c]=='.')
                    {
                        cd++;
                    }
                    else{
                        ch++;
                    }
                }
            }
            if(ch==4 || cd==4 || ch==3 ||cd==3)
            {
                cout<<yes<<endl;
                return;
            }
        }
    }
    cout<<no<<endl;
}
signed main()
{
    fast;
    solve(); return 0;
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        solve();
    }
    return 0;
}