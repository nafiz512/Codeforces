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
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}
void solve()
{
    int n;
    cin >> n;
    vector<int> p(n);
    vector<int> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        a[i] = lcm(p[i], s[i]);
    }
    int g = a[0];
    for (int i = 0; i < n; i++)
    {
        g = gcd(g, a[i]);
        if (g != p[i])
        {
            cout << no << endl;
            return;
        }
    }
    g = a[n - 1];
    for (int i = n - 1; i >= 0; i--)
    {
        g = gcd(g, a[i]);
        if (g != s[i])
        {
            cout << no << endl;
            return;
        }
    }
    cout << yes << endl;
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