#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> scores;
    while (n--) {
        int a;
        cin >> a;
        scores.push_back(a);
    }

    int check = scores[k-1];  // kth index score (1-based input, so adjust for 0-based indexing)
    
    // Remove non-positive scores
    scores.erase(remove_if(scores.begin(), scores.end(), [](int x) { return x <= 0; }), scores.end());
    
    // Count how many scores are >= check
    int count = 0;
    for (int score : scores) {
        if (score >= check) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}