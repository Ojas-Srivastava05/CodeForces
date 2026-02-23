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
// #define pbds tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>
int mod = pow(10, 9) + 7;
int INF = pow(10, 18);
int one = 1;
// mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

using namespace std;
// using namespace __gnu_pbds;

// mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
// cout<<"Case #"<<c<<": ";

void input(vector<int> &v, int n)
{
    for (int i = 0; i < n; i++)
        cin >> v[i];
    return;
}

void tellme(bool ok)
{
    if (ok)
        cout << "YES\n";
    else
        cout << "NO\n";
    return;
}

/* stuff you should look for
 * int overflow, array bounds
 * special cases (n=1?)
 * number of ways asking ? go with DP
 * do something instead of nothing and stay organized
 * WRITE STUFF DOWN
 * DON'T GET STUCK ON ONE APPROACH
 * If code of any problem getting very complex, then your approach is wrong.
 */

/*
     IMPORTANT OF ALL

   * HAVE CONFIDENCE THAT YOU CAN DO IT, YOU WILL.

*/

// for finding (a^b)%c.
int modPow(int a, int b, int c)
{
    if (b == 0)
        return 1;
    if (b % 2 == 0)
        return modPow((a * a) % c, b / 2, c);
    else
        return ((a % c) * modPow((a * a) % c, b / 2, c)) % c;
}

// for computing (p/q)%mod
int modfrac(int p, int q, int m)
{
    int x = p % m;
    int y = modPow(q, m - 2, m);
    int ans = (x * y) % m;
    return ans;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int x,y;
        cin>>x>>y;
        vector<pair<int,int>>dir={{2,1},{3,0},{4,-1}};
        queue<pair<int,int>>q;
        set<pair<int,int>> vis;
        q.push({0,0});
        vis.insert({0,0});
        bool flag=false;
        while(!q.empty())
        {
            auto coord=q.front();
            int i=coord.first;
            int j=coord.second;
            q.pop();
            if(i==x && j==y)
            {
                flag=1;
                break;
            }
            for(auto d:dir)
            {
                int nx=i+d.first;
                int ny=j+d.second;
                if(nx > x) 
                continue;
                if(ny < -1e6 || ny > 1e6) 
                continue;
                if(!vis.count({nx,ny}))
            {
                vis.insert({nx,ny});
                q.push({nx,ny});
            }
               
            }
        }
        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
    return 0;
}