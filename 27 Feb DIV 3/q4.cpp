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
void rotate_to_min(vector<int>&v){
    if(v.empty())return;
    int n=v.size();
    int pos=min_element(v.begin(),v.end())-v.begin();
    rotate(v.begin(),v.begin()+pos,v.end());
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
        if(x==0&&y==n){
            rotate_to_min(a);
            for(int v:a)cout<<v<<" ";
            cout<<"\n";
        }
        else{
            int l=x,r=y;
            if(x>0)l=x-1;
            if(y<n)r=y+1;
            vector<int>mid(a.begin()+l,a.begin()+r);
            sort(all(mid));
            for(int i=0;i<l;i++)cout<<a[i]<<" ";
            for(int v:mid)cout<<v<<" ";
            for(int i=r;i<n;i++)cout<<a[i]<<" ";
            cout<<"\n";
        }
    }
    return 0;
}