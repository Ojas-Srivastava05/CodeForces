#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        if (b > 2*a) {
            cout << -1 << "\n";
        } else {
            long long diff = a ^ b;
            if (diff <= a) {
                // 1 operation
                cout << 1 << "\n" << diff << "\n";
            } else {
                // 2 operations
                cout << 2 << "\n" << a << " " << b << "\n";
            }
        }
    }
    return 0;
}