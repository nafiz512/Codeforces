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

bool canMake(string &s,string p)
{
    char a=p[0],b=p[1];
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==a)
        {
            i++;
            while(i<s.size())
            {
                if(s[i]==b)
                {
                    //cout<<i<<"ps"<<endl;
                    return true;
                }
                i++;
            }
        }
    }
    return false;
}
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    string mch="14689";
    vector<int>fq(10,0);
    for(int i=0;i<n;i++)
    {
        int x=s[i]-'0';
        fq[x]++;
    }
    for(int j=0;j<mch.size();j++)
    {
        int x=mch[j]-'0';
        if(fq[x]>=1)
        {
            cout<<1<<endl;
            cout<<x<<endl;
            return;
        }
    }
    vector<string>vs={"22","25","27","32","33","35","52","55","57","72","75","77"};
    for(int i=0;i<vs.size();i++)
    {
        if(canMake(s,vs[i]))
        {
            cout<<2<<endl;
            cout<<vs[i]<<endl;
            return;
        }
    }
    cout<<-1<<endl;
    cout<<-1<<endl;
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