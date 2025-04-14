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
    string p;
    string s;
    cin>>p>>s;
    int l=0;
    int a=0;
    while(l<p.size() && a<s.size())
    {
        int r=l;
        int cont=0;
        while(r<p.size())
        {
            if(p[r]==p[l])
            {
                r++;
                cont++;
            }
            else
            {
                break;
            }
        }
        int cp=0;
        int b=a;
        while(b<s.size())
        {
            if(s[b]==s[a])
            {
                cp++;
                b++;
            }
            else 
            {
                break;
            }
        }
        if(p[l]!=s[a] || cp<cont || cp>cont*2)
        {
            cout<<no<<endl;
            return;
        }
        else{
            l=r;
            a=b;
        }
    }
    if(l<p.size() || a<s.size())
    {
        cout<<no<<endl;
    }
    else{
        cout<<yes<<endl;
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