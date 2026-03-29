#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) { int x; cin >> x; }

        auto mylcm = [](int x, int y) { return x / __gcd(x, y) * y; };

        int ans = 0;
        if(a[1] % a[0] != 0) ans++;
        for(int i = 1; i < n-1; i++)
        {
            int L = mylcm(a[i-1], a[i+1]);
            if(L % a[i] != 0) ans++;
        }
        if(a[n-2] % a[n-1] != 0) ans++;

        cout << ans << "\n";
    }
}