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

char Conbination(char a,char b)
{
    if(a=='1' || b=='1')return '=';
    if(a=='2' && b=='2')return '2';    
}

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int>fq(3,0);
    for(int i=0;i<s.size();i++)
    {
        int x=s[i]-'0';
        fq[x]++;
    }
    if(fq[2]==2 ||fq[2]==1)
    {
        cout<<no<<endl;return;
    }
    char ch[n][n];
    cout<<yes<<endl;
    for(int i=0;i<n;i++)
    {
        bool flag=true;
        if(s[i]=='2')
        {
            for(int j=0;j<i;j++)
            {
                if(s[j]=='+')
                {
                    flag=false;
                    break;
                }
            }
        }
        for(int j=i;j<n;j++)
        {
            if(i==j)
            {
                ch[i][j]='X';
            }
            else if(s[i]=='1'|| s[j]=='1')
            {
                ch[i][j]='=';
                ch[j][i]='=';
            }
            else 
            {
                ch[i][j]=((flag)?'+':'-');
                ch[j][i]=((flag)?'-':'+');
                flag=false;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<ch[i][j];
        }cout<<endl;
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