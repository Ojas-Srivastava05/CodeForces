#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string st;
    cin>>st;
    int count=0;
    for(int i=0;i<st.size();i++)
    {
        if(st[i]==st[i+1])
        {
            count+=1;
        }
    }
    cout<<count;
    return 0;

}