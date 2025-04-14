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
    vector<string>vs(n);
    for(int i=0;i<n;i++)
    {
        cin>>vs[i];
    }
    int r1=0;
    int c1=n-1;
    set<char>st;
    while(c1>=0 && r1<n)
    {
        st.insert(vs[r1][c1]);
        r1++;c1--;
    }
    int r2=0;
    int c2=0;
    while(c2<n && r2<n)
    {
        st.insert(vs[r2][c2]);
        r2++;c2++;
    }
    if(st.size()!=1 || vs[0][0]==vs[0][1])
    {
        cout<<no<<endl;return;
    }
    set<char>chk;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j || i+j==n-1)
            continue;
            chk.insert(vs[i][j]);
        }
    }
    if(chk.size()!=1 )
    {
        cout<<no<<endl;return;
    }
    cout<<yes<<endl;
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