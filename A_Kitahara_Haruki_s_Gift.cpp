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
    vector<int>v(n);
    int c1=0;
    int c2=0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]==100)c1++;
        else c2++;
    }
    int a=200*((c2+2-1)/2);
    int b=200*(c2/2);
    int dif=a-b;
    if(dif<=c1*100)
    {
        c1-=2;
        if(c1&1)
        {
            cout<<no<<endl;
        }
        else{
            cout<<yes<<endl;
        }
    }
    else{
        cout<<no<<endl;
    }
}
signed main()
{
    //fast;
    solve(); return 0;
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        solve();
    }
    return 0;
}