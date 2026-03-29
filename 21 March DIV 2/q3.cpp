#include <bits/stdc++.h>

#define pb push_back
#define po pop_back
#define mp make_pair
#define int long long
#define f first
#define se second
#define be begin
#define en end
#define all(X) (X).begin(), (X).end()
int mod = pow(10, 9) + 7;
int INF = pow(10, 18);
int one = 1;

using namespace std;

void input(vector<int> &v, int n) {
  for (int i = 0; i < n; i++)
    cin >> v[i];
  return;
}

void tellme(bool ok) {
  if (ok)
    cout << "YES\n";
  else
    cout << "NO\n";
  return;
}

int modPow(int a, int b, int c) {
  if (b == 0)
    return 1;
  if (b % 2 == 0)
    return modPow((a * a) % c, b / 2, c);
  else
    return ((a % c) * modPow((a * a) % c, b / 2, c)) % c;
}

int modfrac(int p, int q, int m) {
  int x = p % m;
  int y = modPow(q, m - 2, m);
  int ans = (x * y) % m;
  return ans;
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;

    vector<int> pairs;
    bool done = false;

    // step 1: disjoint pairs
    for (int i = 1; i <= 2 * n; i += 2) {
      cout << "? " << i << " " << i + 1 << endl;
      
      int res;
      cin >> res;
      if (res == -1)
        return 0;

      if (res == 1) {
        cout << "! " << i << endl;
        done = true;
        break;
      }
      pairs.pb(i);
    }

    if (done)
      continue;

    // step 2: compare with first pair
    int base = pairs[0];

    for (int i = 1; i < (int)pairs.size(); i++) {
      cout << "? " << base << " " << pairs[i] << endl;
      
      int res;
      cin >> res;
      if (res == -1)
        return 0;

      if (res == 1) {
        cout << "! " << base << endl;
        done = true;
        break;
      }
    }

    if (!done) {
      // then the zero is base+1
      cout << "! " << base + 1 << endl;
    }
  }
  return 0;
}