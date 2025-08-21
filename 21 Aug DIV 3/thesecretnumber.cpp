#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> ans;

        for (long long k = 1;; k++) {
            long long exp = 1;
            for (long long i = 0; i < k; i++) exp *= 10;
            exp += 1;
            if (exp > n) break;
            if (n % exp == 0) ans.push_back(n / exp);
        }

        if (ans.empty()) cout << 0 << "\n";
        else {
            cout << ans.size() << "\n";
            sort(ans.begin(),ans.end());
            for (auto x : ans) cout << x << " ";
            cout << "\n";
        }
    }

    return 0;
}