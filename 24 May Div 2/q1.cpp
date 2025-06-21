#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        for(int &x : a) cin >> x;

        sort(a.begin(), a.end());

        int min_removals = n;  // worst case remove all but one element

        for(int i = 0; i < n; i++) {
            for(int j = i; j < n; j++) {
                if ((a[i] + a[j]) % 2 == 0) {
                    int length = j - i + 1;
                    int removals = n - length;
                    min_removals = min(min_removals, removals);
                }
            }
        }

        cout << min_removals << "\n";
    }

    return 0;
}