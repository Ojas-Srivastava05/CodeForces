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

        if (k > n * n) {
            cout << "NO\n";
            continue;
        }

        vector<string> grid(n, string(n, 'U'));
        int filled = 0;
        bool possible = true;

        for (int i = 0; i < n && filled < k; i++) {
            for (int j = 0; j < n && filled < k; j++) {
                if (i % 2 == 0) {
                    if (j % 2 == 0) grid[i][j] = 'R';
                    else grid[i][j] = 'D';
                } else {
                    if (j % 2 == 0) grid[i][j] = 'L';
                    else grid[i][j] = 'U';
                }
                filled++;
            }
        }

        if (filled != k) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
            for (auto &row : grid) cout << row << "\n";
        }
    }

    return 0;
}