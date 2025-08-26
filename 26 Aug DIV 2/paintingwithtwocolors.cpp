#include <iostream>
#include <cstdint>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int64_t n, a, b;
        cin >> n >> a >> b;

        // Blue block size check
        if ((n - b) % 2 != 0) {
            cout << "NO\n";
            continue;
        }

        int64_t s = (n - b) / 2;

        if (a <= b) {
            cout << "YES\n";
            continue;
        }

        int64_t diff = a - b;
        if (diff % 2 == 0 && diff / 2 <= s) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}