#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        // Key insight: We want to find the optimal way to use our numbers
        // We can either use them for their sum value or to build a MEX
        
        sort(a.begin(), a.end());
        
        long long max_score = 0;
        
        // Try all possible ways to allocate numbers between sum and MEX
        // We'll use a different approach: for each possible MEX value k,
        // calculate what's the best score we can get
        
        map<int, int> freq;
        for (int x : a) freq[x]++;
        
        long long total_sum = accumulate(a.begin(), a.end(), 0LL);
        
        // Try different MEX targets
        for (int target_mex = 0; target_mex <= n + 1; target_mex++) {
            long long sum_used_for_mex = 0;
            map<int, int> temp_freq = freq;
            bool can_achieve_mex = true;
            
            // Try to build MEX = target_mex
            for (int i = 0; i < target_mex; i++) {
                if (temp_freq[i] > 0) {
                    sum_used_for_mex += i;
                    temp_freq[i]--;
                } else {
                    can_achieve_mex = false;
                    break;
                }
            }
            
            if (can_achieve_mex) {
                long long remaining_sum = total_sum - sum_used_for_mex;
                long long score = target_mex + remaining_sum;
                max_score = max(max_score, score);
            }
        }
        
        // Also try the case where we don't try to build any MEX, just take sum
        max_score = max(max_score, total_sum);
        
        // And try the case where we just take MEX of everything
        int mex_all = 0;
        map<int, int> mex_freq = freq;
        while (mex_freq.count(mex_all) && mex_freq[mex_all] > 0) {
            mex_freq[mex_all]--;
            mex_all++;
        }
        max_score = max(max_score, (long long)mex_all);
        
        cout << max_score << "\n";
    }
    return 0;
}