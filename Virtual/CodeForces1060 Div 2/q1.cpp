#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <cmath>
#include <limits>
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

        int ans = 0;
        int last_one = -k; // index of last 1 (protected or safe)

        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                // if this '1' is not covered by any previous '1' within distance < k
                if (i - last_one >= k) {
                    ans++;        // protect this one
                } 
                last_one = i; 
            }
        }

        cout << ans << "\n";
    }
    return 0;
}