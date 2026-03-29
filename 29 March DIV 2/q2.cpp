#include <bits/stdc++.h>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>

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

void input(vector<int> &v, int n)
{
    for (int i = 0; i < n; i++)
        cin >> v[i];
}

void tellme(bool ok)
{
    cout << (ok ? "YES\n" : "NO\n");
}

int modPow(int a, int b, int c)
{
    if (b == 0)
        return 1;
    if (b % 2 == 0)
        return modPow((a * a) % c, b / 2, c);
    return ((a % c) * modPow((a * a) % c, b / 2, c)) % c;
}

int modfrac(int p, int q, int m)
{
    int x = p % m;
    int y = modPow(q, m - 2, m);
    return (x * y) % m;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;

        vector<int> p(n);
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
            p[i]--;
        }

        vector<int> bit(n + 2, 0);

        auto update = [&](int idx)
        {
            for (idx++; idx <= n; idx += idx & -idx)
                bit[idx]++;
        };

        auto query = [&](int idx)
        {
            int s = 0;
            for (idx++; idx > 0; idx -= idx & -idx)
                s += bit[idx];
            return s;
        };

        auto range_query = [&](int l, int r)
        {
            if (l > r)
                return 0LL;
            return query(r) - (l > 0 ? query(l - 1) : 0LL);
        };

        int ans = 0;
        int prefix_back = 0;

        for (int B = 1; B <= n; B++)
        {
            int i = B - 1;
            update(p[i]);
            if (p[i] <= i)
                prefix_back++;

            int suffix_fwd = (int)range_query(B, n - 1);
            ans = max(ans, prefix_back + suffix_fwd);
        }

        cout << ans << "\n";
    }
    return 0;
}