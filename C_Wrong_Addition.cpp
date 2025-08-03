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
int digitCount(int n)
{
    int cont = 0;
    while (n > 0)
    {
        cont++;
        n /= 10;
    }
    return cont;
}
void solve()
{
    string a, s;
    cin >> a >> s;
    string ans;
    while (a.size() > 0 || s.size() > 0)
    {
        int x = 0;
        if (a.size())
        {
            x = a.back() - '0';
            a.pop_back();
        }

        int y = s.back() - '0';
        s.pop_back();
        if (y >= x)
        {
            ans.pb(((y - x) + '0'));
        }
        else
        {
            if (s.size() > 0)
            {
                int temp = s.back() - '0';
                s.pop_back();
                y = temp * 10 + y;
                if (y >= x)
                {
                    int val = y - x;
                    if (digitCount(val) < 2)
                    {
                        ans.pb((val + '0'));
                    }
                    else
                    {
                        cout << -1 << endl;
                        return;
                    }
                }
                else
                {
                    cout << -1 << endl;
                    return;
                }
            }
            else
            {
                cout << -1 << endl;
                return;
            }
        }
        if (a.size() > s.size())
        {
            cout << -1 << endl;
            return;
        }
    }
    while (ans.back() == '0')
    {
        ans.pop_back();
    }
    reverse(all(ans));

    cout << ans << endl;
}
signed main()
{
    // fast;
    //  solve(); return 0;
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve();
    }
    return 0;
}