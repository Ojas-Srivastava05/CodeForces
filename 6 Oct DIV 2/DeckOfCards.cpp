#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int cnt0 = 0, cnt1 = 0, cntQ = 0;
        for (char ch : s) {
            if (ch == '0') cnt0++;
            else if (ch == '1') cnt1++;
            else cntQ++;
        }

        string res(n, '?');

        for (int i = 0; i < n; ++i) {
            // Maximum number of 0s that could cover this position
            int top_max = cnt0 + cntQ;
            // Maximum number of 1s that could cover this position
            int bottom_max = cnt1 + cntQ;

            bool rem = (i < top_max || i >= n - bottom_max);
            bool stay = (i >= cnt0 && i < n - cnt1);

            if (rem && stay) res[i] = '?';
            else if (rem) res[i] = '-';
            else res[i] = '+';
        }

        cout << res << "\n";
    }

    return 0;
}