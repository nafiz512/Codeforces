#include <bits/stdc++.h>
using namespace std;

#ifndef itzzRaghav
#define dbg(...) ;
#define debug(...) ;
#define crndl ;
#endif

#define int long long

int findXY(int x, int y, int sz, int value, int r, int c) 
{
    if (sz == 1) {
        assert(r == x && c == y);
        return value;
    }
    int total = sz * sz;
    int subTotal = total / 4;
    int nsz = sz / 2;
    int dx[] = {0, nsz, nsz, 0};
    int dy[] = {0, nsz, 0, nsz};
    for (int i = 0; i < 4; i++) {
        if (r >= x + dx[i] && r < x + dx[i] + nsz && c >= y + dy[i] && c < y + dy[i] + nsz) {
        int nvalue = value + subTotal * i;
        return findXY(x + dx[i], y + dy[i], nsz, nvalue, r, c);
        }
    }
    return -1;
}

pair<int, int> findD(int x, int y, int sz, int value, int d) 
{
    if (sz == 1) {
        assert(d == value);
        return {x, y};
    }
    int total = sz * sz;
    int subTotal = total / 4;
    int nsz = sz / 2;
    for (int i = 0; i < 4; i++) {
        if (d >= value + subTotal * i && d < value + subTotal * (i + 1)) {
        int nvalue = value + subTotal * i;
        if (i == 0) return findD(x, y, nsz, nvalue, d);
        if (i == 1) return findD(x + nsz, y + nsz, nsz, nvalue, d);
        if (i == 2) return findD(x + nsz, y, nsz, nvalue, d);
        if (i == 3) return findD(x, y + nsz, nsz, nvalue, d);
        }
    }
    return {-1, -1};
}

void solve() {
    int n;
    cin >> n;

    int q;
    cin >> q;

    while (q--) {
        string type;
        cin >> type;

        if (type == "->") {
        int r, c;
        cin >> r >> c;
        cout << findXY(1, 1, 1 << n, 1, r, c) << "\n";
        } else {
        int d;
        cin >> d;
        auto res = findD(1, 1, 1 << n, 1, d);
        cout << res.first << " " << res.second << "\n";
        }
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