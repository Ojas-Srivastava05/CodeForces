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

void input(vector<int> &v, int n)
{
    for (int i = 0; i < n; i++)
        cin >> v[i];
}

void tellme(bool ok)
{
    if (ok)
        cout << "YES\n";
    else
        cout << "NO\n";
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

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int l = 1, r = 3 * n;
        for (int i = 0; i < n; i++)
        {
            cout << l << " " << r - 1 << " " << r << " ";
            l++;
            r -= 2;
        }
        cout << "\n";
    }
    return 0;
}