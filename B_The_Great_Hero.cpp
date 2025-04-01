#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define yes "YES"
#define no "NO"

void solve() {
    int ha, hh, n;
    cin >> ha >> hh >> n;

    vector<int> a(n), b(n);
    for (int &i : a) cin >> i;  // Monster attack power
    for (int &i : b) cin >> i;  // Monster health

    int totalDamage = 0;
    for (int i = 0; i < n; i++) {
        int fights = (b[i] + ha - 1) / ha;  // Number of fights to kill this monster
        totalDamage += fights * a[i];      // Damage taken from this monster
    }

    // Check if the hero survives at least till the last monster is killed
    int maxMonsterAttack = *max_element(a.begin(), a.end()); // The strongest monster

    if (hh - (totalDamage - maxMonsterAttack) > 0) {
        cout << yes << endl;
    } else {
        cout << no << endl;
    }
}

signed main() {
    fast;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}