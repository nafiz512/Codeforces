#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> bitCount(32, 0);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            for (int b = 0; b < 32; ++b)
                if (a[i] & (1 << b))
                    bitCount[b]++;
        }

        long long max_sum = 0;
        for (int i = 0; i < n; ++i) {
            long long sum = 0;
            for (int b = 0; b < 32; ++b) {
                if (a[i] & (1 << b))
                    sum += 1LL * (n - bitCount[b]) * (1 << b);
                else
                    sum += 1LL * bitCount[b] * (1 << b);
            }
            if (sum > max_sum)
                max_sum = sum;
        }
        cout << max_sum << '\n';
    }
    return 0;
}
