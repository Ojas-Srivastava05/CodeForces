#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;
const int MAX = 4005; // n+m can be up to 4000

long long fact[MAX], invfact[MAX];

// Fast modular exponentiation
long long modpow(long long a, long long b) {
    long long res = 1;
    while (b) {
        if (b & 1) res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}

// Precompute factorials and inverse factorials
void init() {
    fact[0] = 1;
    for (int i = 1; i < MAX; i++) fact[i] = fact[i - 1] * i % MOD;
    invfact[MAX - 1] = modpow(fact[MAX - 1], MOD - 2);
    for (int i = MAX - 2; i >= 0; i--) invfact[i] = invfact[i + 1] * (i + 1) % MOD;
}

// Compute n choose k modulo MOD
long long C(int n, int k) {
    if (k < 0 || k > n) return 0;
    return fact[n] * invfact[k] % MOD * invfact[n - k] % MOD;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;

    init();

    int min_op = min(n, m);
    int max_op = n + m - 1;

    for (int i = min_op; i <= max_op; i++) {
        long long ans = 0;
        // pick r row operations
        for (int r = max(0, i - m); r <= min(i, n); r++) {
            int c = i - r;
            if (c < 0 || c > m) continue;

            // Number of ways to choose which operations are rows/columns
            long long ways_positions = C(i, r);

            // Number of ways to assign colors for sequence of length i with exactly k colors
            long long ways_colors = C(i - 1, k - 1);

            long long total = ways_positions * ways_colors % MOD;
            ans = (ans + total) % MOD;
        }
        cout << ans << "\n";
    }

    return 0;
}