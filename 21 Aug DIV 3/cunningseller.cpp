#include <bits/stdc++.h>
using namespace std;

struct Deal {
    long long watermelons;
    long long cost;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
    vector<Deal> deals;
    for (int x = 0; ; x++) {
        long long w = pow(3LL, x);
        if (w > 1e9) break;
        long long c = pow(3LL, x + 1) + x * pow(3LL, x - 1);
        if (x == 0) c = 3; 
        deals.push_back({w, c});
    }

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long total_cost = 0;

        
        for (int i = deals.size() - 1; i >= 0 && n > 0; i--) {
            while (deals[i].watermelons <= n) {
                n -= deals[i].watermelons;
                total_cost += deals[i].cost;
            }
        }
        cout << total_cost << "\n";
    }

    return 0;
}