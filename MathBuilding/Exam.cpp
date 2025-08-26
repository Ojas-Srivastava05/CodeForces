#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;

    if (n == 1) {
        cout << 1 << "\n1\n";
        return 0;
    }
    if (n == 2) {
        cout << 1 << "\n1\n";
        return 0;
    }
    if (n == 3) {
        cout << 2 << "\n1 3\n";
        return 0;
    }

    cout << n << "\n";
    // print evens first (2,4,6,...), then odds (1,3,5,...)
    // this ordering guarantees |a_i - a_{i+1}| != 1 for all adjacent positions when n >= 4
    for (int i = 2; i <= n; i += 2) {
        cout << i << " ";
    }
    for (int i = 1; i <= n; i += 2) {
        cout << i << " ";
    }
    cout << "\n";

    return 0;
}