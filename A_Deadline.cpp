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

int isPossible(int x,int d)
{
    int y=x+1;
    return x+(d+y-1)/y;
}
void solve()
{
    int n;
    cin>>n;
    int d;
    cin>>d;
    if(d<=n)
    {
        cout<<yes<<endl;
    }
    else
    {
        int mx=sqrt(d)+5;
        for(int i=0;i<=mx;i++)
        {
            int x=isPossible(i,d);
            if(x<=n)
            {
                cout<<yes<<endl;
                return;
            }
        }
        cout<<no<<endl;
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