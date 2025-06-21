#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long m,n;
    cin>>m>>n;
    long long area;
    area=m*n;
    cout<<floor(area/2);
    return 0;
}