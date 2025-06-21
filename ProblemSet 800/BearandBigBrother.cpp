#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int count=0;
    if(a==b)
    {
        cout<<1<<endl;
        return 0;
    }
    while(b>a || b==a)
    {
        b*=2;
        a*=3;
        count++;
    }
    cout<<count<<endl;
    return 0;
}