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

    vector<int> eq;
    eq.reserve(n);

    for (int i = 1; i <= 2 * n; i += 2) {
      cout << "? " << i << " " << i + 1 << '\n';
      cout << '\n';
      cout.flush();

      int res;
      cin >> res;
      if (res == -1)
        return 0;

      if (res == 1)
        eq.pb(i);
    }

    if (eq.empty()) {
      cout << "! " << 1 << '\n';
      cout << '\n';
      cout.flush();
      continue;
    }

    if ((int)eq.size() == 1) {
      cout << "! " << eq[0] << '\n';
      cout << '\n';
      cout.flush();
      continue;
    }

    int u = eq[0];
    int v = eq[1];

    cout << "? " << u << " " << v << '\n';
    cout << '\n';
    cout.flush();

    int res;
    cin >> res;
    if (res == -1)
      return 0;

    if (res == 1) {
      cout << "! " << u << '\n';
      cout << '\n';
      cout.flush();
    } else {
      cout << "! " << u + 1 << '\n';
      cout << '\n';
      cout.flush();
    }
  }
  return 0;
}