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
    vector<int> v(3);
    string s = "abc";
    set<string> st;

    for (int i = 0; i < 3; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < 3; i++)
    {
        if (v[i] > 0) {
            st.insert(string(1, s[i])); // Convert char to string
            v[i]--;
        }
    }

    sort(all(v),greater<int>());
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (v[i] > 0 && v[j] > 0) {
                string dishCombo = string(1, s[i]) + string(1, s[j]);
                st.insert(dishCombo);
                v[i]--;
                v[j]--;
            }
        }
    }
    if (v[0] > 0 && v[1] > 0 && v[2] > 0) {
        st.insert("abc");
    }

    cout << st.size() << endl;
}

signed main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
