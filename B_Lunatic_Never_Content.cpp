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
bool isPalindrome(vector<int> &v)
{
    for (int i = 0; i < v.size() / 2; i++)
    {
        if (v[i] != v[v.size() - i - 1])
            return false;
    }
    return true;
}
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int g = 0;

    for (int i = 0; i < v.size() / 2; i++)
    {
        g = gcd(g, abs(v[i] - v[n - i - 1]));
    }
    cout << g << endl;
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