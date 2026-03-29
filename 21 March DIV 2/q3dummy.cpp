#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;

    vector<int> pairs;

    bool done = false;

    for (int i = 1; i <= 2 * n; i += 2) {
      cout << "? " << i << " " << i + 1 << endl;
      int r;
      cin >> r;
      if (r == -1)
        return 0;

      if (r == 1) {
        cout << "! " << i << endl;
        done = true;
        break;
      }
      pairs.push_back(i);
    }

    if (done)
      continue;

    int base = pairs[0];

    for (int i = 1; i < (int)pairs.size(); i++) {
      cout << "? " << base << " " << pairs[i] << endl;
      int r;
      cin >> r;
      if (r == -1)
        return 0;

      if (r == 1) {
        cout << "! " << base << endl;
        done = true;
        break;
      }
    }

    if (!done) {

      cout << "! " << base + 1 << endl;
    }
  }
  return 0;
}