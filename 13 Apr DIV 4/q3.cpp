#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> grid(n, vector<int>(n));

        // Input the grid
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> grid[i][j];
            }
        }

        set<int> permutation;

    
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                permutation.insert(grid[i][j]);
            }
        }

        // Print the result as a sorted sequence
        for (auto it = permutation.begin(); it != permutation.end(); it++) {
            cout << *it << " ";
        }
        cout << endl;
    }

    return 0;
}