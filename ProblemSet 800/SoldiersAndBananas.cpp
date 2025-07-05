#include<iostream>
using namespace std;

int main()
{
    long long k;
    long long w;
    long long n;

    cin>>k>>w>>n;
    long long total=k*(n*(n+1)/2);
    long long borrow=total-w;
    if(borrow<0)
    {
    cout<<0;
    return 0;
    }

    cout<<borrow;
    
    return 0;
}