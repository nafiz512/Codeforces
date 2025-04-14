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
    string s;
    cin>>s;
    int mx=1;
    int idx2=-1;
    int indx=0;
    for(int i=0;i<s.size()-1;i++)
    {
        int a=s[i]-'0';
        int b=s[i+1]-'0';
        int x=a+b;
        if(x>=10)
        {
            mx=2;
            idx2=i;
        }
    }
    string ans;
    if(mx==2)
    {
        indx=idx2;
    }
    for(int i=0;i<s.size();i++)
    {
        if(i==indx)
        {
            int a=s[i]-'0';
            int b=s[i+1]-'0';
            int num=a+b;
            string temp;
            while(num>0)
            {
                char ch=num%10+'0';
                num/=10;
                temp.pb(ch);
            }
            reverse(all(temp));
            ans+=temp;
            i++;
            continue;
        }
        ans.pb(s[i]);
    }
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