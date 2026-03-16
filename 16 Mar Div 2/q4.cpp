#include <bits/stdc++.h>

#define pb push_back
#define int long long

using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while(tc--)
    {
        int n,m;
        cin>>n>>m;

        vector<vector<int>> g(n+1);

        for(int i=0;i<m;i++)
        {
            int u,v;
            cin>>u>>v;
            g[u].pb(v);
            g[v].pb(u);
        }

        vector<int> vis(n+1,0);
        int ans=0;

        for(int i=1;i<=n;i++)
        {
            if(vis[i]) continue;

            queue<int> q;
            q.push(i);
            vis[i]=1;

            int nodes=0;
            int edges=0;

            while(!q.empty())
            {
                int v=q.front();
                q.pop();

                nodes++;
                edges+=g[v].size();

                for(auto to:g[v])
                {
                    if(!vis[to])
                    {
                        vis[to]=1;
                        q.push(to);
                    }
                }
            }

            edges/=2;

            if(edges==0)
            ans+=1;
            else if(edges==nodes-1)
            ans+=2;
            else
            ans+=0;
        }

        cout<<ans<<"\n";
    }

    return 0;
}