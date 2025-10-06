#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int ta = 0;
        for (char ch : s) if (ch == 'a') ta++;
        int tb = n - ta;
        int diff = ta - tb;

        if (diff == 0) {
            cout << 0 << "\n";
            continue;
        }

        vector<int> v(n);
        for (int i = 0; i < n; i++) v[i] = (s[i] == 'a') ? 1 : -1;

        unordered_map<int,int> mp;
        mp[0] = -1;
        int pref = 0, ans = n + 1;

        for (int i = 0; i < n; i++) {
            pref += v[i];
            if (mp.count(pref - diff)) ans = min(ans, i - mp[pref - diff]);
            if (!mp.count(pref)) mp[pref] = i;
        }

        cout << (ans > n ? -1 : ans) << "\n";
    }
    return 0;
}