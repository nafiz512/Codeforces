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
    int m;
    cin>>m;
    if(m==0)
    {
        cout<<yes<<endl;
        return;
    }
    vector<int>v(m);
    for(int &i:v)
    {
        cin>>i;
    }
    sort(all(v));
    if(v[0]==1 || v[m-1]==n)
    {
        cout<<no<<endl;
    }
    else
    {
        int cont=1;
        for(int i=1;i<m;i++)
        {
            if(v[i]-v[i-1]==1)
            {
                cont++;
            }
            else{
                cont=1;
            }
            if(cont==3)
            {
                cout<<no<<endl;
                return;
            }
        }
        cout<<yes<<endl;
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