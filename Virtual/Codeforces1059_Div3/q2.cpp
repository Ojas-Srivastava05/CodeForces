#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    int i = 0, j = s.size() - 1;
    while (i < j) {
        if (s[i] != s[j]) return false;
        i++; j--;
    }
    return true;
}

bool isNonDecreasing(string s) {
    for (int i = 1; i < s.size(); i++) {
        if (s[i] < s[i - 1]) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        
        bool found = false;
        int total = 1 << n;

        for (int mask = 0; mask < total; mask++) {
            string p = "", x = "";
            vector<int> indices;
            for (int i = 0; i < n; i++) {
                if (mask & (1 << i)) {
                    p += s[i];
                    indices.push_back(i + 1);
                } else {
                    x += s[i];
                }
            }
            if (isNonDecreasing(p) && isPalindrome(x)) {
                cout << p.size() << "\n";
                for (int id : indices) cout << id << " ";
                cout << "\n";
                found = true;
                break;
            }
        }
        if (!found) cout << -1 << "\n";
    }
    return 0;
}