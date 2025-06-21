#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main()
{
    int n;
    int m;
    long long count=0;
    cin>>n>>m;
    vector<int>ring(m);
    for(int i=0;i<m;i++)
    {
        cin>>ring[i];
    }
    for(int j=0;j<m-1;j++)
    {
        if(j==0&&ring[0]!=1)
        {
            count+=ring[0]-1;
        }
        if(ring[j]>ring[j+1])
        {
            count+=n-(ring[j]-ring[j+1]);
        }
        else if(ring[j]<=ring[j+1]){
            count+=ring[j+1]-ring[j];
        }
    }
    cout<<count;
    return 0;


}