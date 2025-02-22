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
    string str;
    cin>>str;

    for(int i=0;i<str.size();i++)
    {
        if((str[i]!='1' && str[i] !='4') || str[0]!='1')
        {
            cout<<no<<endl;
            return;
        }
        
        if(str[i]=='4')
        {
            int cont=0;
            int j=i;
            while(j<str.size())
            {
                if(str[j]=='4')
                {
                    cont++;
                }
                else
                {
                    break;
                }
                j++;
            }
            i=j-1;
            if(cont>2)
            {
                cout<<no<<endl;
                return;
            }
        }
    }
    cout<<yes<<endl;   
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


