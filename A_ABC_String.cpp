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

bool isValid(string s)
{
    stack<char>st;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='(')
        {
            st.push(s[i]);
        }
        else{
            if(!st.empty())st.pop();
            else return false;
        }
    }
    return st.empty();
}
void solve()
{
    string s;
    cin>>s;
    int n=s.size();
    if(s[0]==s[n-1])
    {
        cout<<no<<endl;return;
    }
    char c1=s[0];
    char c2=s[n-1];
    char c3='0';
    string s1;
    for(int i=0;i<s.size();i++)
    {
        char ch=s[i];
        if(ch==c1)
        {
            s[i]='(';
            s1.pb(s[i]);
        }
        else if(ch==c2)
        {
            s[i]=')';
            s1.pb(s[i]);
        }
        else
        {
            s[i]='(';
            s1.pb(')');
        }
    }
    if(isValid(s) or isValid(s1))
    {
        cout<<yes<<endl;
    }
    else{
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