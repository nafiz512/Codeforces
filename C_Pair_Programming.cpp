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
    int cont,n,m;
    cin>>cont>>n>>m;
    int cnt=cont;
    vector<int>ans,a(n),b(m);
    for(int &i:a)
        cin>>i;
    for(int &i:b)
    {
        cin>>i;
    }
    int la=0,lb=0;
    while(la<a.size() && lb<b.size())
    {
        if(la<a.size() && lb<b.size())
        {
            if(a[la]> cont && b[lb]>cont)
            {
                cout<<-1<<endl;
                return;
            }
        }
        while(la<a.size())
        {
            if(a[la]==0)cont++;
            else if(a[la]>cont)
            {
                break;
            }
            ans.pb(a[la]);
            la++;
        }
        while(lb<b.size())
        {
            if(b[lb]==0)cont++;
            else if(b[lb]>cont)
            {
                break;
            }
            ans.pb(b[lb]);
            lb++;
        }
    }
    while(la<a.size())
    {
        ans.pb(a[la]);
        la++;
    }
    while(lb<b.size())
    {
        ans.pb(b[lb]);
        lb++;
    }
    for(int i=0;i<ans.size();i++)
    {
        if(ans[i]==0)cnt++;
        else if(ans[i]>cnt)
        {
            cout<<-1<<endl;return;
        }
    }
    for(int &i:ans)
    {
        cout<<i<<' ';
    }cout<<endl;
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