#include <bits/stdc++.h>
using namespace std;
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define int long long
#define ff first
#define sc second
#define endl '\n'
#define pb push_back
#define all(v) (v).begin(), (v).end()
#define Pi 2.0 * acos(0.0)
#define getbit(n, i) (((n) & (1LL << (i))) != 0)
#define setbit0(n, i) ((n) & (~(1LL << (i))))
#define setbit1(n, i) ((n) | (1LL << (i)))
#define togglebit(n, i) ((n) ^ (1LL << (i)))
#define firstone(n) ((n) & (-(n)))
#define lastone(n) ((64 - __builtin_clzll(n)))
const int mod = 1e9 + 7;
const int N = 2 * 1e6 + 2;
const string yes = "YES", no = "NO";
// cout << fixed << setprecision(20) << p << endl;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        st.insert(s[i]);
    }
    int mn = INT_MAX;
    for (char c : st)
    {
        int l = 0, r = n - 1;
        int cont = 0;
        bool isPossible = true;
        while (l < r)
        {
            if (s[l] == s[r])
            {
                l++;
                r--;
            }
            else
            {
                if (s[l] == c)
                {
                    cont++;
                    l++;
                }
                else if (s[r] == c)
                {
                    cont++;
                    r--;
                }
                else
                {
                    isPossible = false;
                    break;
                }
            }
        }
        if (isPossible)
        {
            mn = min(mn, cont);
        }
    }
    if (mn == INT_MAX)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << mn << endl;
    }
}
signed main()
{
    fast;
    // solve(); return 0;
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve();
    }
    return 0;
}