#include<iostream>
#include<vector>
using namespace std;
int plague(int t)
{
    vector<int>result;
    for(int i=0;i<t;i++)
    {
        int n,m,l,r;
        cin>>n>>m>>l>>r;
        int center = 0;
        int half = m / 2;
        int lpr = center - half;
        int rpr = center + (m - half);
        if (lpr < l) {
            lpr = l;
            rpr = lpr + m;
        }
        if (rpr > r) {
            rpr = r;
            lpr = rpr - m;
        }
        cout << lpr << " " << rpr << endl;
    }
    return 0;
}
int main()
{
    int t;
    cin>>t;
    plague(t);
    return 0;
}