#include <bits/stdc++.h>
#define pb push_back
#define po pop_back
#define mp make_pair
#define int long long
#define f first
#define se second
#define be begin
#define en end
#define all(X) (X).begin(),(X).end()
int mod=pow(10,9)+7;
int INF=pow(10,18);
int one=1;
using namespace std;
void input(vector<int>&v,int n){
    for(int i=0;i<n;i++)cin>>v[i];
    return;
}
void tellme(bool ok){
    if(ok)cout<<"YES\n";
    else cout<<"NO\n";
    return;
}
int modPow(int a,int b,int c){
    if(b==0)return 1;
    if(b%2==0)return modPow((a*a)%c,b/2,c);
    else return((a%c)*modPow((a*a)%c,b/2,c))%c;
}
int modfrac(int p,int q,int m){
    int x=p%m;
    int y=modPow(q,m-2,m);
    int ans=(x*y)%m;
    return ans;
}
int parity(vector<int>&a){
    int n=a.size(),inv=0;
    vector<bool>vis(n,false);
    for(int i=0;i<n;i++){
        if(vis[i])continue;
        int len=0;
        int j=i;
        while(!vis[j]){
            vis[j]=true;
            j=a[j]-1;
            len++;
        }
        inv+=(len-1);
    }
    return inv%2;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin>>tc;
    while(tc--){
        int n,x,y;
        cin>>n>>x>>y;
        vector<int>a(n);
        input(a,n);
        int len=y-x;
        if(len>=2){
            sort(all(a));
        }
        else if(len==1){
            vector<int>b=a;
            sort(all(b));
            int pa=parity(a);
            int pb=parity(b);
            if(pa!=pb)swap(b[n-1],b[n-2]);
            a=b;
        }
        for(int v:a)cout<<v<<" ";
        cout<<"\n";
    }
    return 0;
}