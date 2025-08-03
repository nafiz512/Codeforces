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
    int m;
    cin >> m;
    vector<vector<int>> v(n, vector<int>(m));
    vector<vector<int>> vis(n, vector<int>(m, true));
    vector<int> st;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
            st.pb(v[i][j]);
        }
    }
    sort(all(st));
    for (int k = 0; k < m; k++)
    {
        for (int i = 0; i < n; i++)
        {
            bool isFound = false;
            for (int j = 0; j < m; j++)
            {
                if (v[i][j] == st[k] && vis[i][j] == true)
                {
                    vis[i][k] = false;
                    swap(v[i][j], v[i][k]);
                    isFound = true;
                    break;
                }
            }
            if (isFound)
                break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << v[i][j] << ' ';
        }
        cout << endl;
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