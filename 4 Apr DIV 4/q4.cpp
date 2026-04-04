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

static bool isPrimeLL(long long x)
{
    if (x < 2)
        return false;
    if (x % 2 == 0)
        return x == 2;
    for (long long d = 3; d * d <= x; d += 2)
        if (x % d == 0)
            return false;
    return true;
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

        vector<long long> primes;
        primes.reserve(n);

        for (long long x = 2; (int)primes.size() < n; x++)
        {
            if (isPrimeLL(x))
                primes.pb(x);
        }

        cout << primes[0] << " ";
        for (int i = 1; i < n; i++)
            cout << primes[i - 1] * primes[i] << " ";
        cout << "\n";
    }
    return 0;
}