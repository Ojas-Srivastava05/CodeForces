#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <cmath>
#include <limits>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b;
        cin>>a>>b;
        vector<long long int>ans;
        for(long long int i=1;i*i<=b;i++)
        {
            if(b%i==0)
            {
                long long int A=a*i;
                long long int B=b/i;
                long long int sum=A+B;
                if(sum%2==0)
                ans.push_back(sum);
            }
            if(i!=b/i)
            {
                long long int k=b/i;
                long long int A=a*k;
                long long int B=b/k;
                long long int sum=A+B;
                if(sum%2==0)
                ans.push_back(sum);
            }
        }
        long long int maximum=-1;
        if(!ans.empty())
        maximum=*max_element(ans.begin(),ans.end());

        cout<<maximum<<endl;
    }
    return 0;
}