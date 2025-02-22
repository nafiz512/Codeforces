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
//fake_confidence

void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for (int &i : v)
    {
        cin>>i;
    }
    vector<int>v2(n);
    for (int &i:v2)
    {
        cin>>i;
    }
    int b=0;
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]==v2[i])
        {
            continue;
        }
        if(v[i]==1)
            b++;
        if (v2[i]==1)
            c++;
    }
    if(b>c)
    {
        cout<<1<<endl;
    }
    else if (b<c) 
    {
        if(b==0)
            cout<<-1<<endl;
        else
        {
            c++;
            int ans=(c/b)+(c%b!=0);
        cout<<ans<<endl;
        }
        
    }
    else if(b==c and b==0 and c==0){
        cout<<-1<<endl;
    }
    else{
        cout<<2<<endl;
    }
}
signed main()
{
    solve(); return 0;
    int t;
    cin>>t;
    //cin.ignore();
    for(int i=1;i<=t;i++)
    {
        //cout <<"case : "<<i<<endl;
        solve();
    }
    return 0;
}



